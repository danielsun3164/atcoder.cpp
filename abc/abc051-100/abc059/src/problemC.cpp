#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<ll> a(n);
	for (ll &ai : a) {
		cin >> ai;
	}
	vector<vector<ll>> target(2, vector<ll>(n));
	target[0][0] = 1, target[1][0] = -1;
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j < n; j++) {
			target[i][j] = -target[i][j - 1];
		}
	}
	ll answer = LONG_LONG_MAX >> 1;
	for (int i = 0; i < 2; i++) {
		ll sum = 0, result = 0;
		for (int j = 0; j < n; j++) {
			sum += a[j];
			if (target[i][j] > 0) {
				if (sum < target[i][j]) {
					result += target[i][j] - sum;
					sum = target[i][j];
				}
			} else {
				if (sum > target[i][j]) {
					result += sum - target[i][j];
					sum = target[i][j];
				}
			}
		}
		answer = min(answer, result);
	}
	cout << answer << endl;
	return 0;
}
