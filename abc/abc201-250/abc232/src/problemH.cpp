#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> solve(int h, int w, int a, int b) {
	// cout << "h=" << h << ", w=" << w << ", a=" << a << ", b=" << b << endl;
	vector<pair<int, int>> result;
	if (2 == h) {
		for (int i = 1; i < b; i++) {
			for (int j = 1; j <= 2; j++) {
				result.push_back({j, i});
			}
		}
		result.push_back({3 - a, b});
		for (int i = b + 1; i <= w; i++) {
			result.push_back({1, i});
		}
		for (int i = w; i > b; i--) {
			result.push_back({2, i});
		}
		result.push_back({a, b});
	} else if ((2 == w) || (1 == b) || ((h == a) && (2 == b))) {
		result = solve(w, h, b, a);
		for (auto &p : result) {
			swap(p.first, p.second);
		}
	} else {
		for (int i = 1; i <= h; i++) {
			result.push_back({i, 1});
		}
		vector<pair<int, int>> result2 = solve(h, w - 1, h + 1 - a, b - 1);
		for (auto &p : result2) {
			p.first = h + 1 - p.first;
			p.second++;
		}
		result.insert(result.end(), result2.begin(), result2.end());
	}
	return result;
}

int main(void) {
	int h, w, a, b;
	cin >> h >> w >> a >> b;
	vector<pair<int, int>> answer = solve(h, w, a, b);
	for (auto [x, y] : answer) {
		cout << x << " " << y << endl;
	}
	return 0;
}
