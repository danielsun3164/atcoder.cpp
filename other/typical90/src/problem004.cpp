#include <bits/stdc++.h>
using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));
	vector<int> sumW(h, 0), sumH(w, 0);
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
			sumW[i] += a[i][j];
			sumH[j] += a[i][j];
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (j) {
				cout << " ";
			}
			cout << sumW[i] + sumH[j] - a[i][j];
		}
		cout << endl;
	}
	return 0;
}
