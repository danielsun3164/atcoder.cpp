#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		m[a[i]]++;
	}
	ll sum = 0LL;
	for (pair<int, int> p : m) {
		sum += p.second * (ll)(p.second - 1) / 2;
	}
	for (int i = 0; i < n; i++) {
		cout << (sum - m[a[i]] + 1) << endl;
	}
	return 0;
}
