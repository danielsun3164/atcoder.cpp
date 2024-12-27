#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));
	for (auto &ai : a) {
		for (int &aii : ai) {
			cin >> aii;
		}
	}
	for (int j = 0; j < w; j++) {
		for (int i = 0; i < h; i++) {
			cout << (i ? " " : "") << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
