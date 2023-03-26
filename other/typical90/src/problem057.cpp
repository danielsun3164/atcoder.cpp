#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> d(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		for (int j = 0; j < t; j++) {
			int x;
			cin >> x;
			d[i][--x] = 1;
		}
	}
	vector<int> s(m);
	for (int i = 0; i < m; i++) {
		cin >> s[i];
	}
	int pos = 0;
	for (int i = 0; i < m; i++) {
		bool found = false;
		for (int j = pos; j < n; j++) {
			if (1 == d[j][i]) {
				if (j != pos) {
					swap(d[j], d[pos]);
				}
				found = true;
				break;
			}
		}
		if (found) {
			for (int j = 0; j < n; j++) {
				if ((j != pos) && (1 == d[j][i])) {
					for (int k = i; k < m; k++) {
						d[j][k] ^= d[pos][k];
					}
				}
			}
			if (1 == s[i]) {
				for (int j = i; j < m; j++) {
					s[j] ^= d[pos][j];
				}
			}
			pos++;
		}
	}
	if (s == vector<int>(m, 0)) {
		cout << mint(2).pow(n - pos).val() << endl;
	} else {
		cout << 0 << endl;
	}
	return 0;
}
