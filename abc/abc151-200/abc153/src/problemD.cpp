#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll h, ans = 0LL, cnt = 1LL;
	cin >> h;
	while (h > 0) {
		ans += cnt;
		h >>= 1;
		cnt <<= 1;
	}
	cout << ans << endl;
	return 0;
}
