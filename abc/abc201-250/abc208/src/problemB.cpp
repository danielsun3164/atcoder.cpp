#include <bits/stdc++.h>
using namespace std;

const int N = 10;

int main(void) {
	int p;
	cin >> p;
	vector<int> a(N);
	a[0] = 1;
	for (int i = 1; i < N; i++) {
		a[i] = a[i - 1] * (i + 1);
	}
	int ans = 0;
	for (int i = N - 1; i >= 0; i--) {
		ans += p / a[i];
		p %= a[i];
	}
	cout << ans << endl;
	return 0;
}
