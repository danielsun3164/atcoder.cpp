#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	map<string, int> mp;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		mp[s]++;
	}
	string answer = "";
	int mx = 0;
	for (auto [s, c] : mp) {
		if (c > mx) {
			answer = s;
			mx = c;
		}
	}
	cout << answer << endl;
	return 0;
}
