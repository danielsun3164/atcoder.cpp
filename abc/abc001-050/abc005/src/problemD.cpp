#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> d(n, vector<int>(n)), sum(n + 1, vector<int>(n + 1, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> d[i][j];
			sum[i + 1][j + 1] += sum[i + 1][j] + sum[i][j + 1] - sum[i][j] + d[i][j];
		}
	}
	vector<int> m(n * n + 1, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = i; k <= n; k++) {
				for (int l = j; l <= n; l++) {
					int size = (k - i) * (l - j);
					m[size] = max(m[size], sum[k][l] - sum[i][l] - sum[k][j] + sum[i][j]);
				}
			}
		}
	}
	for (int i = 0; i <= n * n; i++) {
		m[i + 1] = max(m[i + 1], m[i]);
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int p;
		cin >> p;
		cout << m[p] << endl;
	}
	return 0;
}
