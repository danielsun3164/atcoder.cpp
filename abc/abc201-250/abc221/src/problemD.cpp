#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	set<int> st;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		st.insert(a[i]);
		st.insert(a[i] + b[i]);
	}
	map<int, int> mp;
	int m = st.size(), index = 0;
	vector<int> c(m);
	for (int sti : st) {
		mp[sti] = index;
		c[index++] = sti;
	}
	vector<int> s(m);
	for (int i = 0; i < n; i++) {
		s[mp[a[i]]]++;
		s[mp[a[i] + b[i]]]--;
	}
	for (int i = 0; i < m - 1; i++) {
		s[i + 1] += s[i];
	}
	vector<ll> ans(n + 1, 0LL);
	for (int i = 0; i < m - 1; i++) {
		ans[s[i]] += c[i + 1] - c[i];
	}
	for (int i = 0; i < n; i++) {
		cout << (i ? " " : "") << ans[i + 1];
	}
	cout << endl;
	return 0;
}
