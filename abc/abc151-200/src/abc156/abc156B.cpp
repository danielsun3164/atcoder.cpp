#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k, ans = 0;
	cin >> n >> k;
	while (n > 0) {
		ans++;
		n /= k;
	}
	cout << ans << endl;
	return 0;
}
