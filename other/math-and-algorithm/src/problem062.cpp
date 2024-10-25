#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	ll k;
	cin >> n >> k;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	vector<int> v;
	set<int> st;
	int now = 1, next, start = -1, end = -1;
	v.emplace_back(now);
	st.insert(now);
	map<int, int> mp;
	mp[now] = 1;
	while (int(v.size()) <= k) {
		next = a[now];
		if (!st.contains(next)) {
			now = next;
			v.emplace_back(now);
			st.insert(now);
			mp[now] = v.size();
		} else {
			start = mp[next];
			end = v.size();
			break;
		}
	}
	cout << ((start >= 0) ? v[start - 1 + (k - start + 1) % (end - start + 1)] : v[k]) << endl;
	return 0;
}
