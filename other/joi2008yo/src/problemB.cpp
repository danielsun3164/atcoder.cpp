#include <bits/stdc++.h>
using namespace std;

const string JOI = "JOI";
const string IOI = "IOI";

int solve(string &s, string t) {
	long unsigned int index = 0, ans = 0;
	index = s.find(t);
	while (index != string::npos) {
		ans++;
		index = s.find(t, index + 1);
	}
	return ans;
}

int main() {
	string s;
	cin >> s;
	cout << solve(s, JOI) << endl;
	cout << solve(s, IOI) << endl;
	return 0;
}
