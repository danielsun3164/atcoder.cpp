#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

const static int N = 64;

int main() {
	int n, m, q;
	cin >> n >> m >> q;
	vector<pair<int, int>> xy(m);
	for (int i = 0; i < m; i++) {
		cin >> xy[i].second >> xy[i].first;
		xy[i].first--;
		xy[i].second--;
	}
	sort(xy.begin(), xy.end());
	vector<int> a(q), b(q);
	for (int i = 0; i < q; i++) {
		cin >> a[i] >> b[i];
		a[i]--;
		b[i]--;
	}
	for (int i = 0; i * N < q; i++) {
		vector<ull> dp(n, 0ULL);
		for (int j = i * N; j < min((i + 1) * N, q); j++) {
			dp[a[j]] |= 1ULL << (j - i * N);
		}
		for (int j = 0; j < m; j++) {
			dp[xy[j].first] |= dp[xy[j].second];
		}
		for (int j = i * N; j < min((i + 1) * N, q); j++) {
			cout << (((dp[b[j]] >> (j - i * N)) & 1ULL) ? "Yes" : "No") << endl;
		}
	}
	return 0;
}
