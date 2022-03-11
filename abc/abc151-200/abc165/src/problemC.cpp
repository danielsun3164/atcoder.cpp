#include <bits/stdc++.h>
using namespace std;

int n, m, q;
vector<int> a, b, c, d;

int calc(vector<int> &num) {
	int res = 0;
	for (int i = 0; i < q; i++) {
		if (c[i] == (num[b[i]] - num[a[i]])) {
			res += d[i];
		}
	}
	return res;
}

void increase(vector<int> &num, int idx) {
	num[idx]++;
	if ((idx > 0) && (num[idx] > m)) {
		increase(num, idx - 1);
		num[idx] = num[idx - 1];
	}
}

int main(void) {
	cin >> n >> m >> q;
	a.resize(q);
	b.resize(q);
	c.resize(q);
	d.resize(q);
	for (int i = 0; i < q; i++) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
		a[i]--;
		b[i]--;
	}
	vector<int> num(n, 1);
	int ans = 0;
	while (num[0] <= m) {
		ans = max(ans, calc(num));
		increase(num, n - 1);
	}
	cout << ans << endl;
	return 0;
}
