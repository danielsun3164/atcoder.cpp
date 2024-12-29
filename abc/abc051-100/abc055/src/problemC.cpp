#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll n, m;
	cin >> n >> m;
	ll answer = min(n, m >> 1);
	m -= answer << 1;
	cout << (answer + (m >> 2)) << endl;
	return 0;
}
