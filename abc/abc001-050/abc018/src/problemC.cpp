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
	vector<vector<int>> yoko(r, vector<int>(c, 0)), yoko_rev(r, vector<int>(c, 0)),
		tate(r, vector<int>(c, 0)), tate_rev(r, vector<int>(c, 0));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (WHITE == s[i][j]) {
				yoko[i][j] = (0 == j) ? 1 : yoko[i][j - 1] + 1;
				tate[i][j] = (0 == i) ? 1 : tate[i - 1][j] + 1;
			} else {
				yoko[i][j] = 0;
				tate[i][j] = 0;
			}
		}
	}
	for (int i = r - 1; i >= 0; i--) {
		for (int j = c - 1; j >= 0; j--) {
			if (WHITE == s[i][j]) {
				yoko_rev[i][j] = (c - 1 == j) ? 1 : yoko_rev[i][j + 1] + 1;
				tate_rev[i][j] = (r - 1 == i) ? 1 : tate_rev[i + 1][j] + 1;
			} else {
				yoko_rev[i][j] = 0;
				tate_rev[i][j] = 0;
			}
		}
	}
	int ans = 0;
	for (int i = k - 1; i <= r - k; i++) {
		for (int j = k - 1; j <= c - k; j++) {
			bool ok = true;
			for (int l = i - k + 1; l < i + k; l++) {
				if ((yoko[l][j] < k - abs(l - i)) || (yoko_rev[l][j] < k - abs(l - i))) {
					ok = false;
					break;
				}
			}
			if (ok) {
				for (int l = j - k + 1; l < j + k; l++) {
					if ((tate[i][l] < k - abs(l - j)) || (tate_rev[i][l] < k - abs(l - j))) {
						ok = false;
						break;
					}
				}
			}
			if (ok) {
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
