#include <bits/stdc++.h>
#include <atcoder/mincostflow>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;

int main(void) {
	int l, r;
	cin >> l >> r;
	vector<int> a(l), b(r);
	for (int &ai : a) {
		cin >> ai;
	}
	for (int &bi : b) {
		cin >> bi;
	}
	vector<vector<int>> c(l, vector<int>(r));
	for (auto &ci : c) {
		for (int &cij : ci) {
			cin >> cij;
		}
	}
	atcoder::mcf_graph<ll, ll> mcf(l + r + 2);
	int s = l + r, t = s + 1, big = 0, f = accumulate(a.begin(), a.end(), 0);
	for (auto ci : c) {
		for (int cij : ci) {
			big = max(big, cij + 1);
		}
	}
	mcf.add_edge(s, t, INF, big);
	for (int i = 0; i < l; i++) {
		mcf.add_edge(s, i, a[i], 0);
		for (int j = 0; j < r; j++) {
			mcf.add_edge(i, l + j, INF, big - c[i][j]);
		}
	}
	for (int j = 0; j < r; j++) {
		mcf.add_edge(l + j, t, b[j], 0);
	}
	cout << (1LL * f * big - mcf.flow(s, t, f).second) << endl;
	return 0;
}
