#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const char A = 'A';
const int N = 3;

char add(char c, ll l) {
	return char(A + (c - A + l) % N);
}

char calc(string &s, ll t, ll k) {
	if (0 == t) {
		return s[k];
	}
	if (0 == k) {
		return add(s[0], t);
	}
	return add(calc(s, t - 1, k / 2), (1 & k) + 1);
}

int main(void) {
	string s;
	int q;
	cin >> s >> q;
	while (q--) {
		ll t, k;
		cin >> t >> k;
		cout << calc(s, t, k - 1) << endl;
	}
	return 0;
}
