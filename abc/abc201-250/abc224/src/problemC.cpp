#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<ll> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			ll dx1 = x[j] - x[i], dy1 = y[j] - y[i];
			for (int k = j + 1; k < n; k++) {
				ll dx2 = x[k] - x[i], dy2 = y[k] - y[i];
				if (dx2 * dy1 != dx1 * dy2) {
					answer++;
				}
			}
		}
	}
	cout << answer << endl;
	return 0;
}
