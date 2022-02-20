#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(ll l) {
	string s = to_string(l);
	bool down = false;
	for (int i = 0; i < int(s.size()); i++) {
		if (down) {
			s[i] = '7';
		} else {
			if ('4' == s[i]) {
				s[i] = '3';
				down = true;
			} else if ('9' == s[i]) {
				s[i] = '7';
				down = true;
			} else if (s[i] > '4') {
				s[i]--;
			}
		}
	}
	return l - stol(s, 0, 8);
}

int main(void) {
	ll a, b;
	cin >> a >> b;
	cout << calc(b) - calc(a - 1) << endl;
	return 0;
}
