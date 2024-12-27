#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int h, w;
	cin >> h >> w;
	vector<int> row(h, 0), col(w, 0);
	vector<vector<int>> a(h, vector<int>(w));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
			row[i] += a[i][j];
			col[j] += a[i][j];
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cout << (j ? " " : "") << (row[i] + col[j] - a[i][j]);
		}
		cout << endl;
	}
	return 0;
}
