#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll x;
	cin >> x;
	ll now = 100LL;
	int cnt = 0;
	while (now < x) {
		now += now / 100;
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}
