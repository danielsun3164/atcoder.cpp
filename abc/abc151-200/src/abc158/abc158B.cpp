#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll n, a, b;
	cin >> n >> a >> b;
	cout << (n / (a + b) * a + min(n % (a + b), a)) << endl;
	return 0;
}
