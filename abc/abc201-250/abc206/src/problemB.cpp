#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	ll ng = 0, ok = 1'000'000'000;
	while (ok > ng + 1) {
		ll med = (ng + ok) >> 1;
		if (med * (med + 1) / 2 >= n) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << ok << endl;
	return 0;
}
