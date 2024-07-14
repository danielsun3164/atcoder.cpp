#include <bits/stdc++.h>
#include <atcoder/string>
using namespace std;
using ll = long long;

vector<pair<int, ll>> st;
ll total;

void add(int x) {
	ll count = 1LL;
	while (!st.empty()) {
		pair<int, ll> p = st.back();
		if (p.first < x) {
			break;
		}
		st.pop_back();
		total -= p.first * p.second;
		count += p.second;
	}
	total += x * count;
	st.push_back({x, count});
}

int main() {
	int n;
	string s;
	cin >> n >> s;
	vector<int> sa = atcoder::suffix_array(s);
	vector<int> lcp = atcoder::lcp_array(s, sa);
	vector<ll> ans(n, 0LL);
	st.clear();
	total = 0LL;
	for (int i = 0; i < n - 1; i++) {
		add(lcp[i]);
		ans[sa[i + 1]] += total;
	}
	st.clear();
	total = 0L;
	for (int i = n - 2; i >= 0; i--) {
		add(lcp[i]);
		ans[sa[i]] += total;
	}
	for (int i = 0; i < n; i++) {
		cout << (ans[i] + n - i) << endl;
	}
	return 0;
}
