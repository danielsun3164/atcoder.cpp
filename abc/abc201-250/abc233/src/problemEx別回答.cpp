#include <bits/stdc++.h>
using namespace std;

const static int N = 200'002;

struct bit_vector {
	static constexpr uint32_t W = 64;

	uint32_t n, zeros;
	vector<uint64_t> block;
	vector<uint32_t> count;

	inline uint32_t get(uint32_t i) const {
		return uint32_t(block[i / W] >> (i % W)) & 1u;
	}

	inline void set(uint32_t i) {
		block[i / W] |= uint64_t(1) << (i % W);
	}

	bit_vector(int _n) {
		init(_n);
	}

	void init(int _n) {
		n = zeros = _n;
		block.resize(n / W + 1, 0);
		count.resize(block.size(), 0);
	}

	void build() {
		for (uint32_t i = 1; i < block.size(); i++) {
			count[i] = count[i - 1] + __builtin_popcountll(block[i - 1]);
		}
		zeros = rank0(n);
	}

	inline uint32_t rank0(uint32_t i) const {
		return i - rank1(i);
	}

	inline uint32_t rank1(uint32_t i) const {
		return count[i / W] + __builtin_popcountll(block[i / W] & ((uint64_t(1) << (i % W)) - 1));
	}
};

template <typename T>
struct wavelet_matrix {
	int n, lg;
	vector<T> a;
	vector<bit_vector> bv;

	wavelet_matrix(int _n) : n(max(_n, 1)), a(n) {}
	wavelet_matrix(const vector<T> &_a) : n(_a.size()), a(_a) {
		build();
	}

	void build() {
		lg = __lg(max<T>(*max_element(a.begin(), a.end()), 1)) + 1;
		bv.assign(lg, n);
		vector<T> cur = a, nxt(n);
		for (int h = lg - 1; h >= 0; h--) {
			for (int i = 0; i < n; i++) {
				if (1 & (cur[i] >> h)) {
					bv[h].set(i);
				}
			}
			bv[h].build();
			vector<decltype(nxt.begin())> it{nxt.begin(), nxt.begin() + bv[h].zeros};
			for (int i = 0; i < n; i++) {
				*it[bv[h].get(i)]++ = cur[i];
			}
			swap(cur, nxt);
		}
		return;
	}

	void set(uint32_t i, const T &x) {
		a[i] = x;
	}

	inline pair<uint32_t, uint32_t> succ0(int l, int r, int h) const {
		return {bv[h].rank0(l), bv[h].rank0(r)};
	}

	inline pair<uint32_t, uint32_t> succ1(int l, int r, int h) const {
		uint32_t l0 = bv[h].rank0(l), r0 = bv[h].rank0(r), zeros = bv[h].zeros;
		return {l + zeros - l0, r + zeros - r0};
	}

	// return a[k]
	T access(uint32_t k) const {
		T ret = 0;
		for (int h = lg - 1; h >= 0; h--) {
			uint32_t f = bv[h].get(k);
			ret |= f ? (T(1) << h) : 0;
			k = f ? bv[h].rank1(k) + bv[h].zeros : bv[h].rank0(k);
		}
		return ret;
	}

	// k-th (0-indexed) smallest number in a[l, r)
	T kth_smallest(uint32_t l, uint32_t r, uint32_t k) {
		T ret = 0;
		for (int h = lg - 1; h >= 0; h--) {
			uint32_t l0 = bv[h].rank0(l), r0 = bv[h].rank0(r);
			if (k < r0 - l0) {
				l = l0, r = r0;
			} else {
				k -= r0 - l0;
				ret |= T(1) << h;
				l += bv[h].zeros - l0;
				r += bv[h].zeros - r0;
			}
		}
		return ret;
	}

	// k-th (0-indexed) largest number in a[l, r)
	T kth_largest(int l, int r, int k) {
		return kth_smallest(l, r, r - l - k - 1);
	}

	// count i s.t. (l <= i < r) && (v[i] < upper)
	int range_freq(int l, int r, T upper) {
		if (upper >= (T(1) << lg)) {
			return r - l;
		}
		int ret = 0;
		for (int h = lg - 1; h >= 0; h--) {
			bool f = (upper >> h) & 1;
			uint32_t l0 = bv[h].rank0(l), r0 = bv[h].rank0(r);
			if (f) {
				ret += r0 - l0;
				l += bv[h].zeros - l0;
				r += bv[h].zeros - r0;
			} else {
				l = l0;
				r = r0;
			}
		}
		return ret;
	}

	int range_freq(int l, int r, T lower, T upper) {
		return range_freq(l, r, upper) - range_freq(l, r, lower);
	}

	// max v[i] s.t. (l <= i < r) && (v[i] < upper)
	T prev_value(int l, int r, T upper) {
		int cnt = range_freq(l, r, upper);
		return cnt == 0 ? T(-1) : kth_smallest(l, r, cnt - 1);
	}

	// min v[i] s.t. (l <= i < r) && (lower <= v[i])
	T next_value(int l, int r, T lower) {
		int cnt = range_freq(l, r, lower);
		return cnt == r - l ? T(-1) : kth_smallest(l, r, cnt);
	}
};

int main(void) {
	int n;
	cin >> n;
	vector<pair<int, int>> xy(n);
	for (pair<int, int> &xyi : xy) {
		int x, y;
		cin >> x >> y;
		xyi.first = x - y;
		xyi.second = x + y;
	}
	sort(xy.begin(), xy.end());
	wavelet_matrix<int> wm(n);
	vector<int> ser(n);
	for (int i = 0; i < n; i++) {
		ser[i] = xy[i].first;
		wm.set(i, xy[i].second);
	}
	wm.build();
	int q;
	cin >> q;
	while (q--) {
		int x, y, k;
		cin >> x >> y >> k;
		int a = x - y, b = x + y, ok = N, ng = -1;
		while (ok > ng + 1) {
			int mid = midpoint(ok, ng);
			int left = distance(ser.begin(), lower_bound(ser.begin(), ser.end(), a - mid)),
				right = distance(ser.begin(), lower_bound(ser.begin(), ser.end(), a + mid + 1));
			int count = wm.range_freq(left, right, max(0, b - mid), b + mid + 1);
			if (count >= k) {
				ok = mid;
			} else {
				ng = mid;
			}
		}
		cout << ok << endl;
	}
	return 0;
}
