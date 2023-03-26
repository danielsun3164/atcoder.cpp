#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> l(n), r(n);

	for (int i = 0; i < n; i++) {
		cin >> l[i] >> r[i];
	}
	double answer = 0.0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int count = 0, all = 0;
			for (int k = l[i]; k <= r[i]; k++) {
				for (int m = l[j]; m <= r[j]; m++) {
					if (k > m) {
						count++;
					}
					all++;
				}
			}
			answer += double(count) / all;
		}
	}
	cout << setprecision(20) << answer << endl;
	return 0;
}
