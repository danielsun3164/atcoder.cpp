#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 3;
const static int MAX = 1'000'000;
const static ll SEED = 202'202'052'100'238'523LL;

vector<vector<int>> pf;
vector<vector<ll>> hs;
mt19937_64 engine(SEED);

void init() {
	pf.resize(MAX + 1);
	for (int i = 2; i <= MAX; i++) {
		if (pf[i].empty()) {
			for (int j = i; j <= MAX; j += i) {
				int mj = j;
				while (0 == mj % i) {
					pf[j].emplace_back(i);
					mj /= i;
				}
			}
		}
	}

	hs.resize(MAX + 1, vector<ll>(N, 0LL));
	for (int i = 0; i <= MAX; i++) {
		hs[i][0] = engine();
		hs[i][1] = engine();
		hs[i][2] = hs[i][0] ^ hs[i][1];
	}
}

int main(void) {
	int n, q;
	cin >> n >> q;
	vector<int> a(n), l(q), r(q);
	for (int &ai : a) {
		cin >> ai;
	}
	for (int i = 0; i < q; i++) {
		cin >> l[i] >> r[i];
	}
	init();
	vector<int> bk(MAX + 1, 0);
	vector<ll> rw(n + 1, 0LL);
	for (int i = 0; i < n; i++) {
		rw[i + 1] = rw[i];
		for (int nx : pf[a[i]]) {
			rw[i + 1] ^= hs[nx][bk[nx] % N];
			bk[nx]++;
		}
	}
	for (int i = 0; i < q; i++) {
		cout << ((rw[l[i] - 1] == rw[r[i]]) ? "Yes" : "No") << endl;
	}
	return 0;
}
