#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	double answer = 0.0;
	for (int i = 0; i < n; i++) {
		double a;
		cin >> a;
		answer += a / 3.0;
	}
	for (int i = 0; i < n; i++) {
		double b;
		cin >> b;
		answer += b * 2.0 / 3.0;
	}
	cout << fixed << setprecision(20) << answer << endl;
	return 0;
}
