#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	ll t;
	cin >> n >> t;
	vector<ll> a(n);
	for (ll &ai : a) {
		cin >> ai;
	}
	pair<ll, set<int>> mx;
	map<ll, set<pair<ll, set<int>>>> mp;
	mx = {a[n - 1], {n - 1}};
	for (int i = n - 2; i >= 0; i--) {
		if (a[i] < mx.first) {
			mp[mx.first - a[i]].insert(mx);
		}
		if (a[i] > mx.first) {
			mx = {a[i], {i}};
		} else if (a[i] == mx.first) {
			mx.second.insert(i);
		}
	}
	set<pair<ll, set<int>>> st = mp.rbegin()->second;
	set<int> index;
	for (auto sti : st) {
		index.insert(sti.second.begin(), sti.second.end());
	}
	int l = st.size(), r = index.size();
	cout << min(l, r) << endl;
	return 0;
}
