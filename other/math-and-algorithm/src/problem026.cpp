#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	double answer = 0.0;
	for (double i = 1.0; i <= n; i++) {
		answer += n / i;
	}
	cout << fixed << setprecision(20) << answer << endl;
	return 0;
}
