#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll dfs(int n, vector<vector<ll>> &a, vector<bool> &used, vector<int> &s, int index) {
	if (index == n) {
		ll answer = 0LL;
		for (int i = 0; i < n; i += 2) {
			answer ^= a[s[i]][s[i + 1] - s[i] - 1];
		}
		return answer;
	}
	int first = distance(used.begin(), find(used.begin(), used.end(), false));
	s[index++] = first;
	used[first] = true;
	ll answer = 0LL;
	for (int second = first + 1; second < n; second++) {
		if (!used[second]) {
			used[second] = true;
			s[index++] = second;
			answer = max(answer, dfs(n, a, used, s, index));
			used[second] = false;
			index--;
		}
	}
	used[first] = false;
	return answer;
}

int main(void) {
	int n;
	cin >> n;
	n <<= 1;
	vector<vector<ll>> a(n - 1);
	for (int i = 0; i < n - 1; i++) {
		a[i].resize(n - i - 1);
		for (int j = 0; j < n - i - 1; j++) {
			cin >> a[i][j];
		}
	}
	vector<bool> used(n, false);
	vector<int> s(n);
	cout << dfs(n, a, used, s, 0) << endl;
	return 0;
}
