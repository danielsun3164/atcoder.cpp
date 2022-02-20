#include <bits/stdc++.h>
using namespace std;

const char WHITE = '1';

vector<int> calc(int h, vector<vector<bool>> &s, int plan, int j) {
	vector<int> result(__builtin_popcount(plan) + 1);
	int index = 0;
	for (int i = 0; i < h; i++) {
		if (s[i][j]) {
			result[index]++;
		}
		if (plan & (1 << i)) {
			index++;
		}
	}
	return result;
}

bool ok(vector<int> &v, int k) {
	return *max_element(v.begin(), v.end()) <= k;
}

int main(void) {
	int h, w, k;
	cin >> h >> w >> k;
	vector<vector<bool>> s(h, vector<bool>(w));
	for (int i = 0; i < h; i++) {
		string t;
		cin >> t;
		for (int j = 0; j < w; j++) {
			s[i][j] = WHITE == t[j];
		}
	}
	int ans = INT_MAX;
	for (int i = 0; i < (1 << (h - 1)); i++) {
		int result = __builtin_popcount(i);
		vector<int> count(result + 1);
		for (int j = 0; j < w; j++) {
			vector<int> now = calc(h, s, i, j);
			if (!ok(now, k)) {
				result = INT_MAX;
				break;
			}
			for (int l = 0; l < int(count.size()); l++) {
				count[l] += now[l];
			}
			if (!ok(count, k)) {
				result++;
				count = now;
			}
		}
		ans = min(ans, result);
	}
	cout << ans << endl;
	return 0;
}
