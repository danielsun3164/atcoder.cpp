#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	set<int> st;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		st.insert(a[i]);
	}
	map<int, int> mp;
	int index = 0;
	for (int sti : st) {
		mp[sti] = index++;
	}
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		b[i] = mp[a[i]];
	}
	vector<mint> p2(n + 1);
	p2[0] = 1;
	for (int i = 1; i <= n; i++) {
		p2[i] = p2[i - 1] * 2;
	}
	atcoder::fenwick_tree<mint> fw(n);
	mint answer = 0;
	for (int i = 0; i < n; i++) {
		answer += fw.sum(0, b[i] + 1) * p2[i];
		fw.add(b[i], mint(1) / p2[i + 1]);
	}
	cout << answer.val() << endl;
	return 0;
}
