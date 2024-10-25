#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<double> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	double answer = DBL_MAX;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			answer = min(answer, hypot(x[i] - x[j], y[i] - y[j]));
		}
	}
	cout << fixed << setprecision(20) << answer << endl;
	return 0;
}
