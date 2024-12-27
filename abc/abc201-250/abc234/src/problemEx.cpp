#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll MAX = INT_MAX;
const static vector<ll> DLT = {-MAX - 1, -MAX, -MAX + 1, -1LL, 0LL, 1LL, MAX - 1, MAX, MAX + 1};

int main(void) {
	int n;
	ll k;
	cin >> n >> k;
	vector<ll> x(n), y(n);
	map<ll, vector<int>> mp;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		ll id = x[i] / k * MAX + y[i] / k;
		mp[id].emplace_back(i);
	}
	vector<pair<ll, ll>> v;
	for (int i = 0; i < n; i++) {
		ll id = x[i] / k * MAX + y[i] / k;
		for (ll d : DLT) {
			for (int nx : mp[id + d]) {
				if (i >= nx) {
					continue;
				}
				if ((x[i] - x[nx]) * (x[i] - x[nx]) + (y[i] - y[nx]) * (y[i] - y[nx]) <= k * k) {
					v.push_back({i + 1, nx + 1});
				}
			}
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << endl;
	for (auto [xi, yi] : v) {
		cout << xi << " " << yi << endl;
	}
	return 0;
}
