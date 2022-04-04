#include <bits/stdc++.h>
using namespace std;

const string DICT = "abc";

vector<string> calc(int n) {
	vector<string> res;
	if (0 == n) {
		res.emplace_back("");
		return res;
	}
	for (char c : DICT) {
		for (string s : calc(n - 1)) {
			res.emplace_back(string(1, c) + s);
		}
	}
	return res;
}

int main(void) {
	int n;
	cin >> n;
	vector<string> ans = calc(n);
	for (string s : ans) {
		cout << s << endl;
	}
	return 0;
}
