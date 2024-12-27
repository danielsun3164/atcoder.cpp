#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll n, k, x, y;
	cin >> n >> k >> x >> y;
	cout << (min(n, k) * x + max(0LL, n - k) * y) << endl;
	return 0;
}
