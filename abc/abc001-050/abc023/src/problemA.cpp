#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	int ans = 0;
	for (char c : s) {
		ans += c - '0';
	}
	cout << ans << endl;
	return 0;
}
