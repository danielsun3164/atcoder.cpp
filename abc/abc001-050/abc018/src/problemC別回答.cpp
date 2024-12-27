#include <bits/stdc++.h>
using namespace std;

const char WHITE = 'o';

int main(void) {
	int r, c, k;
	cin >> r >> c >> k;
	vector<string> s(r);
	for (int i = 0; i < r; i++) {
		cin >> s[i];
	}
	vector<vector<bool>> a(r, vector<bool>(c)), a2(r, vector<bool>(c));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			a[i][j] = WHITE == s[i][j];
		}
	}
	for (int l = 0; l < k - 1; l++) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				a2[i][j] = a[i][j] && ((i > 0) ? a[i - 1][j] : false) &&
						   ((i < r - 1) ? a[i + 1][j] : false) && ((j > 0) ? a[i][j - 1] : false) &&
						   ((j < c - 1) ? a[i][j + 1] : false);
			}
		}
		swap(a, a2);
	}
	int ans = 0;
	for (int i = k - 1; i <= r - k; i++) {
		ans += count_if(a[i].begin(), a[i].end(), [](bool x) { return x; });
	}
	cout << ans << endl;
	return 0;
}
