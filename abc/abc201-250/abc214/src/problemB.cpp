#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int s, t;
	cin >> s >> t;
	int ans = 0;
	for (int i = 0; i <= s; i++) {
		for (int j = 0; j <= s - i; j++) {
			for (int k = 0; k <= s - i - j; k++) {
				if (i * j * k <= t) {
					ans++;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
