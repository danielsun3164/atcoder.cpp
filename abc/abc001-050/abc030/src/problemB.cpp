#include <bits/stdc++.h>
using namespace std;

const double N = 360.0;

int main(void) {
	int n, m;
	cin >> n >> m;
	double ans = abs((n % 12) * N / 12 + m * N / 12 / 60 - m * N / 60);
	cout << min(ans, N - ans) << endl;
	return 0;
}
