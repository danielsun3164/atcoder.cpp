#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<ll> fact(n + 1);
	fact[0] = 1LL;
	for (int i = 1; i <= n; i++) {
		fact[i] = fact[i - 1] * i;
	}
	cout << fact[n] << endl;
	return 0;
}
