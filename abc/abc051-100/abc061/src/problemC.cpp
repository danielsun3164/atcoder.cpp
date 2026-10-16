#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int MAX = 100'000;

int main(void) {
	int n;
	ll k;
	cin >> n >> k;
	vector<ll> count(MAX + 1, 0);
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		count[a] += b;
	}
	for (int i = 1; i <= MAX; i++) {
		if (k <= count[i]) {
			cout << i << endl;
			break;
		}
		k -= count[i];
	}
	return 0;
}
