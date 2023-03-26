#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int TEN = 10;

int main() {
	int n;
	cin >> n;
	vector<ll> a(n << 1);
	ll sum = 0LL;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		a[i + n] = a[i];
	}
	if (0 == sum % TEN) {
		int left = 0, right = 0;
		ll target = sum / TEN, range = 0LL;
		while (right < (n << 1)) {
			while ((range < target) && (right < (n << 1))) {
				range += a[right++];
			}
			if (range == target) {
				cout << "Yes" << endl;
				return 0;
			}
			while ((range > target) && (left < right)) {
				range -= a[left++];
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
