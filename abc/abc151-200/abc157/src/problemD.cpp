#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

int main(void) {
	int n, m, k;
	cin >> n >> m >> k;
	atcoder::dsu d(n);
	vector<int> counts(n, 1);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		d.merge(a, b);
		counts[a]++;
		counts[b]++;
	}
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		if (d.same(a, b)) {
			counts[a]++;
			counts[b]++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ((i) ? " " : "") << (d.size(i) - counts[i]);
	}
	cout << endl;
	return 0;
}
