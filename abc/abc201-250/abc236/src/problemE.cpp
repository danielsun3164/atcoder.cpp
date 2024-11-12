#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using ll = long long;

const static ll INF = 1'000'000'000;
const static ll N = 10'000;

template <class T>
T calc(vector<T> &b) {
	T s = 0, t = 0;
	for (T bi : b) {
		T u = max(s, t) + bi;
		s = t;
		t = u;
	}
	return max(s, t);
}

int main(void) {
	int n;
	cin >> n;
	vector<ll> a(n);
	for (ll &ai : a) {
		cin >> ai;
	}
	{
		ll ok = N, ng = (INF + 1) * N;
		while (ng > ok + 1) {
			ll med = (ok + ng) >> 1;
			vector<ll> b(n);
			for (int i = 0; i < n; i++) {
				b[i] = a[i] * N - med;
			}
			if (calc(b) >= 0LL) {
				ok = med;
			} else {
				ng = med;
			}
		}
		cout << fixed << setprecision(10) << (ok / double(N)) << endl;
	}
	{
		ll ok = 1LL, ng = INF + 1;
		while (ng > ok + 1) {
			ll med = (ok + ng) >> 1;
			vector<ll> b(n);
			for (int i = 0; i < n; i++) {
				b[i] = (a[i] >= med) ? 1 : -1;
			}
			if (calc(b) > 0LL) {
				ok = med;
			} else {
				ng = med;
			}
		}
		cout << ok << endl;
	}
	return 0;
}
