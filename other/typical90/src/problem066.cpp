#include <bits/stdc++.h>
using namespace std;

const static int N = 100;

int main() {
	int n;
	cin >> n;
	vector<double> p(N + 1, 0.0), sum(N + 1, 0.0), sum_sum(N + 2, 0.0);
	double answer = 0.0;
	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		double pi = 1.0 / (r - l + 1);
		answer += (sum_sum[l] - sum_sum[r + 1]) * pi;
		for (int i = l; i <= r; i++) {
			p[i] += pi;
		}
		for (int i = N - 1; i >= 0; i--) {
			sum[i] = sum[i + 1] + p[i + 1];
		}
		for (int i = N; i >= 0; i--) {
			sum_sum[i] = sum_sum[i + 1] + sum[i];
		}
	}
	cout << setprecision(20) << answer << endl;
	return 0;
}
