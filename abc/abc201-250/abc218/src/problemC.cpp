#include <bits/stdc++.h>
using namespace std;

const char MASU = '#';
const int N = 4;

vector<string> rotate(vector<string> &s) {
	int n = s.size(), m = s[0].size();
	vector<string> t(m);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			t[i].push_back(s[j][m - 1 - i]);
		}
	}
	return t;
}

vector<string> trim(vector<string> &s) {
	int n = s.size();
	int left = n, right = 0, up = n, bottom = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (MASU == s[i][j]) {
				left = min(left, j);
				right = max(right, j);
				up = min(up, i);
				bottom = max(bottom, i);
			}
		}
	}
	vector<string> t;
	for (int i = up; i <= bottom; i++) {
		t.push_back(s[i].substr(left, right - left + 1));
	}
	return t;
}

int main(void) {
	int n;
	cin >> n;
	vector<string> s(n), t(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	s = trim(s);
	t = trim(t);
	for (int i = 0; i < 4; i++) {
		if (t == s) {
			cout << "Yes" << endl;
			return 0;
		}
		t = rotate(t);
	}
	cout << "No" << endl;
	return 0;
}
