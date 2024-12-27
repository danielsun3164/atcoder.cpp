#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll MAX = 200;

int main(void) {
	ll x;
	cin >> x;
	ll left = 0, right = MAX;
	while (right - left > 1) {
		ll med = (left + right) >> 1;
		ll p = med * med * med * med;
		if (p < x) {
			left = med;
		} else if (p >= x) {
			right = med;
		}
	}
	cout << right << endl;
	return 0;
}
