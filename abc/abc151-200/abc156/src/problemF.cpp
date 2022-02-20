#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int k, q;
	cin >> k >> q;
	vector<int> d(k), dm(k);
	for (int i = 0; i < k; i++) {
		cin >> d[i];
	}
	for (int _ = 0; _ < q; _++) {
		int n, x, m;
		cin >> n >> x >> m;
		n--;
		x %= m;
		ll sum = 0LL;
		for (int i = 0; i < k; i++) {
			sum += dm[i] = (0 == d[i] % m) ? m : d[i] % m;
		}
		ll start = x, end = x + n / k * sum;
		for (int i = 0; i < n % k; i++) {
			end += dm[i];
		}
		cout << n - (end / m - start / m) << endl;
	}
	return 0;
}
