#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll x, sum = 0LL;
	cin >> x;
	int now = 0;
	while (sum < x) {
		sum += ++now;
	}
	cout << now << endl;
	return 0;
}
