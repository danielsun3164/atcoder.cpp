#include <bits/stdc++.h>
#include <atcoder/maxflow>
using namespace std;
using ll = long long;

const static vector<int> DX { 0, 1, 1, 0, -1, -1, -1, 0, 1 };
const static vector<int> DY { 0, 0, 1, 1, 1, 0, -1, -1, -1 };
const static int N = 9;

int main() {
	int n;
	ll t;
	cin >> n >> t;
	vector<ll> ax(n + 1), ay(n + 1), bx(n + 1), by(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> ax[i] >> ay[i];
	}
	map<pair<ll, ll>, int> mp;
	for (int i = 1; i <= n; i++) {
		cin >> bx[i] >> by[i];
		mp[ { bx[i], by[i] }] = i;
	}
	atcoder::mf_graph<int> g(2 * n + 3);
	vector<vector<int>> nex(n + 1, vector<int>(N));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < N; j++) {
			ll tx = ax[i] + DX[j] * t, ty = ay[i] + DY[j] * t;
			nex[i][j] = mp[ { tx, ty }];
			if (0 != nex[i][j]) {
				g.add_edge(i, n + nex[i][j], 1);
			}
		}
	}
	int start = (n << 1) | 1, end = start + 1;
	for (int i = 1; i <= n; i++) {
		g.add_edge(start, i, 1);
		g.add_edge(i + n, end, 1);
	}
	int res = g.flow(start, end);
	if (n != res) {
		cout << "No" << endl;
		return 0;
	}
	vector<int> answer(n);
	for (atcoder::mf_graph<int>::edge e : g.edges()) {
		if (1 == e.flow) {
			int a = e.to, b = e.from;
			if ((a >= n + 1) && (a <= (n << 1)) && (b >= 1) && (b <= n)) {
				for (int k = 1; k < N; k++) {
					if (a - n == nex[b][k]) {
						answer[b - 1] = k;
					}
				}
			}
		}
	}
	cout << "Yes" << endl;
	for (int i = 0; i < n; i++) {
		cout << ((i) ? " " : "") << answer[i];
	}
	cout << endl;
	return 0;
}
