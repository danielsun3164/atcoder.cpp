#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int TEN = 10;

int main(void) {
	ll x;
	cin >> x;
	bool minus = x < 0;
	x = abs(x);
	cout << (minus ? -(x + TEN - 1) / TEN : x / TEN) << endl;
	return 0;
}
