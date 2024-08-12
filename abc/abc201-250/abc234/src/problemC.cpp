#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll k;
	cin >> k;
	string s;
	while (k > 0LL) {
		s.push_back((k & 1) ? '2' : '0');
		k >>= 1;
	}
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}
