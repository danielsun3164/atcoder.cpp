#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, s, t, w;
	cin >> n >> s >> t >> w;
	int ans = ((w >= s) && (w <= t)) ? 1 : 0;
	for (int i = 0; i < n - 1; i++) {
		int a;
		cin >> a;
		w += a;
		ans += ((w >= s) && (w <= t)) ? 1 : 0;
	}
	cout << ans << endl;
	return 0;
}
