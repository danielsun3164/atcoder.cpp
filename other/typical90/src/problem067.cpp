#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 9;

string to_base9(ll l) {
	string s;
	while (l > 0) {
		ll r = l % N;
		s.push_back(((8LL == r) ? 5 : r) + '0');
		l /= N;
	}
	reverse(s.begin(), s.end());
	return s;
}

string calc(string &n) {
	ll l = stoll(n, nullptr, 8);
	return (0LL == l) ? to_string(l) : to_base9(l);
}

int main() {
	string n;
	int k;
	cin >> n >> k;
	while (k--) {
		n = calc(n);
	}
	cout << n << endl;
	return 0;
}
