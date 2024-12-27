#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 4;
const static vector<int> DX{0, 1, 0, 1};
const static vector<int> DY{0, 0, 1, 1};

int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w)), b(h, vector<int>(w));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> b[i][j];
		}
	}
	ll answer = 0;
	for (int i = 0; i < h - 1; i++) {
		for (int j = 0; j < w - 1; j++) {
			int d = b[i][j] - a[i][j];
			answer += abs(d);
			for (int k = 0; k < N; k++) {
				a[i + DX[k]][j + DY[k]] += d;
			}
		}
		if (a[i][w - 1] != b[i][w - 1]) {
			cout << "No" << endl;
			return 0;
		}
	}
	if (a == b) {
		cout << "Yes" << endl;
		cout << answer << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
