#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> c(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	map<int, int> m;
	for (int i = 0; i < k; i++) {
		m[c[i]]++;
	}
	int ans = m.size();
	for (int i = k; i < n; i++) {
		if (0 == --m[c[i - k]]) {
			m.erase(c[i - k]);
		}
		m[c[i]]++;
		ans = max(ans, int(m.size()));
	}
	cout << ans << endl;
	return 0;
}
