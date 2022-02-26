#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll n, k;
	cin >> n >> k;
	ll d = n % k;
	cout << min(d, k - d) << endl;
	return 0;
}
