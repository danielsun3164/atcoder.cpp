#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 10;

int main(void) {
	string n;
	ll k;
	cin >> n >> k;
	ll INF = k + 1, eq = 1LL;
	map<ll, ll> m;
	for (int i = 0; i < int(n.length()); i++) {
		int digit = n[i] - '0';
		map<ll, ll> next;
		for (auto& [prod, value] : m) {
			for (int d = 0; d < N; d++) {
				next[min(INF, prod * d)] += value;
			}
		}
		for (int d = 0; d < digit; d++) {
			if ((0 != i) || (0 != d)) {
				next[min(INF, eq * d)]++;
			}
		}
		eq *= digit;
		if (0 != i) {
			for (ll d = 1; d < N; d++) {
				next[min(INF, d)]++;
			}
		}
		m = next;
	}
	ll ans = 0LL;
	for (auto& [prod, value] : m) {
		if (prod <= k) {
			ans += value;
		}
	}
	cout << (ans + ((eq <= k) ? 1 : 0)) << endl;
	return 0;
}
