#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<ll> a(n), sum(n);
	a[0] = sum[0] = 0LL;
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		sum[i] = a[i] + sum[i - 1];
	}
	int m;
	cin >> m;
	vector<int> b(m);
	ll answer = 0LL;
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		b[i]--;
		if (i) {
			answer += abs(sum[b[i]] - sum[b[i - 1]]);
		}
	}
	cout << answer << endl;
	return 0;
}
