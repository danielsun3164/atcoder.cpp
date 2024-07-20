#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static char Y = 'Y';

bool check(vector<int> &a, int m, ll k) {
	int n = a.size();
	if (n < m) {
		return false;
	}
	int l = m >> 1, r = m - l - 1;
	vector<ll> s(n + 1, 0LL);
	for (int i = 0; i < n; i++) {
		s[i + 1] = s[i] + a[i];
	}
	for (int i = l; i < n; i++) {
		if (i + r >= n) {
			break;
		}
		ll sum = 0;
		sum += a[i] * ll(l) - (s[i] - s[i - l]);
		sum += (s[i + r + 1] - s[i + 1]) - a[i] * ll(r);
		if (sum <= k) {
			return true;
		}
	}
	return false;
}

int main(void) {
	string s;
	ll k;
	cin >> s >> k;
	int n = s.size();
	vector<int> a;
	for (int i = 0; i < n; i++) {
		if (Y == s[i]) {
			a.emplace_back(i);
		}
	}
	for (int i = 0; i < int(a.size()); i++) {
		a[i] -= i;
	}
	int ok = 0, ng = n + 1;
	while (ng > ok + 1) {
		int med = (ok + ng) >> 1;
		if (check(a, med, k)) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << ok << endl;
	return 0;
}
