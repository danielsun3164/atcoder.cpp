#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

struct swag {
	int size;
	deque<ll> head, tail;
	ll rsum;

	swag() {
		init();
	}

	void init() {
		size = 0;
		head.clear();
		tail.clear();
		rsum = ident();
	}

	ll ident() {
		return -INF;
	}

	ll ope(ll x, ll y) {
		return max(x, y);
	}

	void push(ll x) {
		size++;
		rsum = ope(rsum, x);
		tail.emplace_back(x);
	}

	void pop() {
		if (0 == size) {
			return;
		}
		if (head.empty()) {
			ll sum = ident();
			while (!tail.empty()) {
				ll x = tail.back();
				sum = ope(x, sum);
				head.emplace_back(sum);
				tail.pop_back();
			}
			rsum = ident();
		}
		head.pop_back();
		size--;
	}

	ll query() {
		ll result = rsum;
		if (!head.empty()) {
			result = ope(head.back(), result);
		}
		return result;
	}
};

int main(void) {
	int h, w, h1, w1, h2, w2;
	cin >> h >> w >> h1 >> w1 >> h2 >> w2;
	vector<vector<ll>> a(h, vector<ll>(w)), sum(h + 1, vector<ll>(w + 1, 0LL));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
			sum[i + 1][j + 1] = sum[i][j + 1] + sum[i + 1][j] - sum[i][j] + a[i][j];
		}
	}
	if ((h2 >= h1) && (w2 >= w1)) {
		cout << 0 << endl;
		return 0;
	}
	h2 = min(h1, h2);
	w2 = min(w1, w2);
	vector<vector<ll>> aoki(h, vector<ll>(w, 0LL));
	for (int i = 0; i <= h - h2; i++) {
		for (int j = 0; j <= w - w2; j++) {
			aoki[i][j] = sum[i + h2][j + w2] - sum[i + h2][j] - sum[i][j + w2] + sum[i][j];
		}
	}
	int dh = h1 - h2 + 1, dw = w1 - w2 + 1;
	swag sg;
	vector<vector<ll>> m(h + 1, vector<ll>(w + 1, 0LL)), m2(h + 1, vector<ll>(w + 1, 0LL));
	for (int i = 0; i < h; i++) {
		sg.init();
		for (int j = 0; j < dw; j++) {
			sg.push(aoki[i][j]);
		}
		for (int j = 0; j <= w - dw; j++) {
			m[i][j] = sg.query();
			sg.push(aoki[i][j + dw]);
			sg.pop();
		}
	}
	for (int j = 0; j <= w - dw; j++) {
		sg.init();
		for (int i = 0; i < dh; i++) {
			sg.push(m[i][j]);
		}
		for (int i = 0; i <= h - dh; i++) {
			m2[i][j] = sg.query();
			sg.push(m[i + dh][j]);
			sg.pop();
		}
	}
	ll answer = -INF;
	for (int i = 0; i <= h - h1; i++) {
		for (int j = 0; j <= w - w1; j++) {
			answer = max(answer, sum[i + h1][j + w1] - sum[i + h1][j] - sum[i][j + w1] + sum[i][j] -
									 m2[i][j]);
		}
	}
	cout << answer << endl;
	return 0;
}
