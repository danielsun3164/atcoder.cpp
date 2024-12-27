#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<double> a(n), b(n);
	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		sum += a[i] / b[i];
	}
	double time = sum / 2.0, answer = 0.0;
	int i = 0;
	while (time > 0.0) {
		if (time <= a[i] / b[i]) {
			answer += time * b[i];
			time = 0.0;
		} else {
			answer += a[i];
			time -= a[i] / b[i];
			i++;
		}
	}
	cout << setprecision(20) << answer << endl;
	return 0;
}
