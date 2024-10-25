#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<ll> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	ll answer = 0LL;
	for (int i = 0; i < n; i++) {
		answer += (i * 2 - n + 1) * (x[i] + y[i]);
	}
	cout << answer << endl;
	return 0;
}
