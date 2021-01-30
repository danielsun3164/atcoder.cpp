#include <bits/stdc++.h>
using namespace std;

int main(void) {
	long long n;
	cin >> n;
	int ans = 0;
	for (long long i = 1L; i * i <= 2 * n; i++) {
		if (0L == (2 * n % i)) {
			if (1L == (1L & (i + 2 * n / i))) {
				ans += 2;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
