#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int ans = INT_MAX;
	for (int i = 0; i < n; i++) {
		int a, p, x;
		cin >> a >> p >> x;
		if (x > a) {
			ans = min(ans, p);
		}
	}
	cout << ((INT_MAX == ans) ? -1 : ans) << endl;
	return 0;
}
