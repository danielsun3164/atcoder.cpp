#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 200;

int main(void) {
	int n;
	cin >> n;
	vector<int> count(N, 0);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		count[a % N]++;
	}
	ll ans = 0LL;
	for (int i = 0; i < N; i++) {
		ans += count[i] * ll(count[i] - 1) / 2LL;
	}
	cout << ans << endl;
	return 0;
}
