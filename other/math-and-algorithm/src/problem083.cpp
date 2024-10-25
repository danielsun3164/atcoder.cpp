#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<ll> a(n), b(n);
	for (ll &ai : a) {
		cin >> ai;
	}
	for (ll &bi : b) {
		cin >> bi;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	ll answer = 0LL;
	for (int i = 0; i < n; i++) {
		answer += abs(a[i] - b[i]);
	}
	cout << answer << endl;
	return 0;
}
