#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		ans += max(0, a - 10);
	}
	cout << ans << endl;
	return 0;
}
