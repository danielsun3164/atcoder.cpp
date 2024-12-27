#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<vector<ll>> a(h, vector<ll>(w));
	for (int i = 0; i < h; i++) {
		for (ll &aii : a[i]) {
			cin >> aii;
		}
	}
	for (int i1 = 0; i1 < h; i1++) {
		for (int i2 = i1 + 1; i2 < h; i2++) {
			for (int j1 = 0; j1 < w; j1++) {
				for (int j2 = j1 + 1; j2 < w; j2++) {
					if (a[i1][j1] + a[i2][j2] > a[i2][j1] + a[i1][j2]) {
						cout << "No" << endl;
						return 0;
					}
				}
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}
