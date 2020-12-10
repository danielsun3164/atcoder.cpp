#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	vector<long long> sum(n + 1);
	sum[0] = 0L;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum[i + 1] = sum[i] + a[i];
	}
	long long m = 0;
	for (int i = k; i <= n; i++) {
		m = max(m, sum[i] - sum[i - k]);
	}
	cout << m << endl;
	return 0;
}
