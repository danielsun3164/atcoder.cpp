#include <bits/stdc++.h>
using namespace std;

const static int N = 26;

string convert(string &s, map<char, char> &mp) {
	string t;
	for (char c : s) {
		t.push_back(mp[c]);
	}
	return t;
}

int main(void) {
	string x;
	cin >> x;
	map<char, char> to, back;
	for (int i = 0; i < N; i++) {
		to[x[i]] = char('a' + i);
		back[char('a' + i)] = x[i];
	}
	int n;
	cin >> n;
	vector<string> s(n), t(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		t[i] = convert(s[i], to);
	}
	sort(t.begin(), t.end());
	for (int i = 0; i < n; i++) {
		cout << convert(t[i], back) << endl;
	}
	return 0;
}
