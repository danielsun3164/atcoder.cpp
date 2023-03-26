#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	return (0 == b) ? a : gcd(b, a % b);
}

int main(void) {
	int k;
	cin >> k;
	int ans = 0;
	for (int a = 1; a <= k; a++) {
		for (int b = 1; b <= k; b++) {
			int g = gcd(a, b);
			for (int c = 1; c <= k; c++) {
				ans += gcd(g, c);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
