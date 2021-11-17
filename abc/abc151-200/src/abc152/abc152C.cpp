#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	int m = p[0], ans = 1;
	for (int i = 1; i < n; i++) {
		if (p[i] < m) {
			m = p[i];
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
