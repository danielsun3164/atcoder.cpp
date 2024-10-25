#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;
	set<ll> st;
	for (ll i = 1LL; i * i <= n; i++) {
		if (0LL == n % i) {
			st.insert(i);
			st.insert(n / i);
		}
	}
	for (ll sti : st) {
		cout << sti << endl;
	}
	return 0;
}
