#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<ll> a(n);
	for (ll &ai : a) {
		cin >> ai;
	}
	ll answer = 0LL;
	for (int i = 0; i < n; i++) {
		answer += (i * 2 - n + 1) * a[i];
	}
	cout << answer << endl;
	return 0;
}
