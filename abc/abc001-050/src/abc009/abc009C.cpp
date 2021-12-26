#include <bits/stdc++.h>
using namespace std;

const int N = 26;

int count(string s, string ans, string sorted, char c) {
	vector<int> cs(N), csorted(N);
	for (int i = 0; i < int(sorted.size()); i++) {
		if (i > int(ans.size())) {
			cs[s[i] - 'a']++;
		}
		if (0 != sorted[i]) {
			csorted[sorted[i] - 'a']++;
		}
	}
	int cnt = 0;
	for (int i = 0; i < int(ans.size()); i++) {
		if (s[i] == ans[i]) {
			cnt++;
		}
	}
	if (c == s[ans.size()]) {
		cnt++;
	}
	for (int i = 0; i < N; i++) {
		cnt += min(cs[i], csorted[i]);
	}
	return cnt;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	string s, ans;
	cin >> s;
	string sorted = s;
	sort(sorted.begin(), sorted.end());
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (0 != sorted[j]) {
				char c = sorted[j];
				sorted[j] = 0;
				if ((n - count(s, ans, sorted, c)) <= k) {
					ans.push_back(c);
					break;
				} else {
					sorted[j] = c;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
