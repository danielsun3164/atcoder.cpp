#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string w;
	cin >> w;
	map<char, int> mp;
	for (char c : w) {
		mp[c]++;
	}
	for (auto p : mp) {
		if (p.second & 1) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}