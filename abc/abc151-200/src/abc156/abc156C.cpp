#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, avg = 0;
	cin >> n;
	vector<int> x(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		avg += x[i];
	}
	avg /= n;
	int ans = INT_MAX >> 1;
	for (int a = avg - 1; a <= avg + 1; a++) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += (x[i] - a) * (x[i] - a);
		}
		ans = min(ans, sum);
	}
	cout << ans << endl;
	return 0;
}
