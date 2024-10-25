#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	double answer = 0.0;
	for (int i = 0; i < n; i++) {
		double p, q;
		cin >> p >> q;
		answer += q / p;
	}
	cout << fixed << setprecision(20) << answer << endl;
	return 0;
}
