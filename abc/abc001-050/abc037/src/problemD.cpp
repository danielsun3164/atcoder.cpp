#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

const static vector<int> DX = { -1, 1, 0, 0 };
const static vector<int> DY = { 0, 0, -1, 1 };

void calc(int h, int w, int x, int y, vector<vector<int>> &a, vector<vector<mint>> &dp) {
	for (int i = 0; i < int(DX.size()); i++) {
		int nx = x + DX[i], ny = y + DY[i];
		if ((nx >= 0) && (nx < h) && (ny >= 0) && (ny < w) && (a[nx][ny] < a[x][y])) {
			dp[x][y] += dp[nx][ny];
		}
	}
}

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));
	vector<pair<int, pair<int, int>>> values;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
			values.push_back( { a[i][j], { i, j } });
		}
	}
	sort(values.begin(), values.end());
	vector<vector<mint>> dp(h, vector<mint>(w, 1));
	for (pair<int, pair<int, int>> p : values) {
		calc(h, w, p.second.first, p.second.second, a, dp);
	}
	mint answer = 0;
	for (vector<mint> dpi : dp) {
		answer += accumulate(dpi.begin(), dpi.end(), mint(0));
	}
	cout << answer.val() << endl;
	return 0;
}
