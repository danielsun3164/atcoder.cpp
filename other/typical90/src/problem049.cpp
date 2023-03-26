#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using ll = long long;

struct edge {
	int l, r;
	ll c;
};

bool operator<(const edge &e1, const edge &e2) {
	return (e1.c < e2.c);
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<edge> v(m);
	for (int i = 0; i < m; i++) {
		cin >> v[i].c >> v[i].l >> v[i].r;
		v[i].l--;
	}
	sort(v.begin(), v.end());
	atcoder::dsu d(n + 1);
	ll answer = 0LL;
	for (int i = 0; i < m; i++) {
		if (!d.same(v[i].l, v[i].r)) {
			answer += v[i].c;
			d.merge(v[i].l, v[i].r);
		}
	}
	cout << ((1 == d.groups().size()) ? answer : -1LL) << endl;
	return 0;
}
