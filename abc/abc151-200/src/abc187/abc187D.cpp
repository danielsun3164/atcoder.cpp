#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<pair<ll, ll>> d(n);
	ll aoki = 0LL, takahashi = 0LL;
	for (int i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		d[i] = { a, b };
		aoki += a;
	}
	sort(d.begin(), d.end(), [](pair<ll, ll> a, pair<ll, ll> b) {
		return 2LL * a.first + a.second > 2L * b.first + b.second;
	});
	for (int i = 0; i < n; i++) {
		takahashi += d[i].first + d[i].second;
		aoki -= d[i].first;
		if (takahashi > aoki) {
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
}
