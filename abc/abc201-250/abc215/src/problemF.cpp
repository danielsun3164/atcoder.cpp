#include <bits/stdc++.h>
using namespace std;

const int N = 1'000'000'000;

bool check(vector<pair<int, int>> &v, int val) {
	int n = v.size();
	int left = 0, right = 0, min_y = INT_MAX, max_y = INT_MIN;
	while (right < n) {
		if ((min_y <= v[right].second - val) || (max_y >= v[right].second + val)) {
			return true;
		}
		if (v[right].first - v[left].first >= val) {
			min_y = min(min_y, v[left].second);
			max_y = max(max_y, v[left].second);
			left++;
		} else {
			right++;
		}
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end());
	int ok = 0, ng = N + 1;
	while (ng - ok > 1) {
		int med = (ok + ng) >> 1;
		if (check(v, med)) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << ok << endl;
	return 0;
}
