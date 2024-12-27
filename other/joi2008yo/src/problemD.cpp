#include <bits/stdc++.h>
using namespace std;

bool ok(vector<pair<int, int>> hoshi, vector<pair<int, int>> seiza, int start) {
	int sx = hoshi[start].first, sy = hoshi[start].second;
	for (pair<int, int> next : seiza) {
		if (hoshi.end() ==
			find(hoshi.begin(), hoshi.end(), make_pair(sx + next.first, sy + next.second))) {
			return false;
		}
	}
	return true;
}

int main() {
	int m;
	cin >> m;
	int x0, y0;
	cin >> x0 >> y0;
	vector<pair<int, int>> seiza(m - 1);
	for (int i = 0; i < m - 1; i++) {
		int tx, ty;
		cin >> tx >> ty;
		seiza[i] = {tx - x0, ty - y0};
	}
	int n;
	cin >> n;
	vector<pair<int, int>> hoshi(n);
	for (int i = 0; i < n; i++) {
		int tx, ty;
		cin >> tx >> ty;
		hoshi[i] = {tx, ty};
	}
	for (int i = 0; i < n; i++) {
		if (ok(hoshi, seiza, i)) {
			cout << hoshi[i].first - x0 << " " << hoshi[i].second - y0 << endl;
		}
	}
	return 0;
}
