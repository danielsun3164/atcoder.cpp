#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<ll> a(n);
	ll a_max = 0LL;
	for (ll &ai : a) {
		cin >> ai;
		a_max = max(a_max, ai);
	}
	ll ok = 0LL, ng = a_max * n / k + 1;
	while (ng > ok + 1) {
		ll med = (ok + ng) >> 1, sum = 0LL;
		for (ll ai : a) {
			sum += min(ai, med);
		}
		if (sum >= med * k) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << ok << endl;
	return 0;
}
