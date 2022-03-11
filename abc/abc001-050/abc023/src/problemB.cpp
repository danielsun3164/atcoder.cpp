#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	string s;
	cin >> n >> s;
	string now = "b";
	int cnt = 0;
	while (int(now.size()) < n) {
		if (0 == cnt % 3) {
			now = 'a' + now + 'c';
		} else if (1 == cnt % 3) {
			now = 'c' + now + 'a';
		} else {
			now = 'b' + now + 'b';
		}
		cnt++;
	}
	cout << ((now == s) ? cnt : -1) << endl;
	return 0;
}
