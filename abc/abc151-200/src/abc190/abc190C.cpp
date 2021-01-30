#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m, k;
	cin >> n >> m;
	vector<int> a(m), b(m), count(n, 0);
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i];
		a[i]--;
		b[i]--;
	}
	cin >> k;
	vector<int> c(k), d(k);
	for (int i = 0; i < k; i++) {
		cin >> c[i] >> d[i];
		c[i]--;
		d[i]--;
	}
	int ans = 0, cnt = 0;
	for (int i = 0; i < (1 << k); i++) {
		fill(count.begin(), count.end(), 0);
		cnt = 0;
		for (int j = 0; j < k; j++) {
			count[(i & (1 << j)) ? c[j] : d[j]]++;
		}
		for (int j = 0; j < m; j++) {
			if ((count[a[j]] > 0) && (count[b[j]] > 0)) {
				cnt++;
			}
		}
		ans = max(ans, cnt);
	}
	cout << ans << endl;
	return 0;
}
