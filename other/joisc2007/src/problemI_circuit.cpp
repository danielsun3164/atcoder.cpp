#include <bits/stdc++.h>
#include <boost/dynamic_bitset.hpp>
using namespace std;

int gcd(int a, int b) {
	return (0 == b) ? a : gcd(b, a % b);
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i]--;
	}
	vector<int> d;
	for (int i = 1; i <= k; i++) {
		if (0 == k % i) {
			d.emplace_back(i);
		}
	}
	vector<bool> visited(n, false);
	vector<int> v(n + 1, 0), p(n);
	vector<vector<int>> vs(n), rt(n + 1);
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			int u = i, co = 1;
			vs[i].emplace_back(i);
			visited[i] = true;
			while (a[u] != i) {
				u = a[u];
				vs[i].emplace_back(u);
				visited[u] = true;
				co++;
			}
			v[co]++;
			rt[co].emplace_back(i);
		}
	}
	vector<boost::dynamic_bitset<>> dp(n, boost::dynamic_bitset<>(n));
	for (int s = 1; s <= n; s++) {
		if (v[s] > 0) {
			dp[0].clear();
			dp[0][0] = true;
			for (unsigned long int i = 0; i < d.size(); i++) {
				bool f = 1 == gcd(s, k / d[i]);
				for (int j = 0; j <= v[s]; j++) {
					dp[i + 1][j] = dp[i][j];
					if (f && (j >= d[i])) {
						dp[i + 1][j] = dp[i + 1][j] || dp[i + 1][j - d[i]];
					}
				}
			}
			if (!dp[d.size()][v[s]]) {
				cout << 0 << endl;
				return 0;
			}
			int id = v[s];
			vector<int> ds;
			for (int i = d.size(); i > 0; i--) {
				for (int j = id; j >= 0; j -= d[i - 1]) {
					if (dp[i - 1][j]) {
						for (int l = 0; l < (id - j) / d[i - 1]; l++) {
							ds.emplace_back(d[i - 1]);
						}
						id = j;
						break;
					}
				}
			}
			id = 0;
			for (int e : ds) {
				int l = s * e;
				for (int i = id; i < id + e; i++) {
					int r = rt[s][i], u = 0;
					vector<int> nv(s, 0);
					for (int j = 0; j < s; j++) {
						nv[u] = vs[r][j];
						u = (u + (k % l) / e) % s;
					}
					vs[r].clear();
					for (int nvi : nv) {
						vs[r].emplace_back(nvi);
					}
				}
				for (int i = id; i < id + e; i++) {
					int r = rt[s][i];
					for (int j = 0; j < s; j++) {
						if (i + 1 == id + e) {
							p[vs[r][j]] = vs[rt[s][id]][(j + 1) % s];
						} else {
							p[vs[r][j]] = vs[rt[s][i + 1]][j];
						}
					}
				}
				id += e;
			}
		}
	}
	for (int pi : p) {
		cout << (pi + 1) << endl;
	}
	return 0;
}
