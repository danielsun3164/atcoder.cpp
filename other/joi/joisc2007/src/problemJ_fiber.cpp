#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	atcoder::dsu d(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		d.merge(a, b);
	}
	cout << d.groups().size() - 1 << endl;
	return 0;
}
