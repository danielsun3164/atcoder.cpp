#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, k;
	cin >> n >> k;
	vector<ll> a(n), b(n), d;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		d.emplace_back(b[i]);
		d.emplace_back(a[i] - b[i]);
	}
	sort(d.begin(), d.end(), greater<ll>());
	cout << accumulate(d.begin(), d.begin() + k, 0LL) << endl;
	return 0;
}
