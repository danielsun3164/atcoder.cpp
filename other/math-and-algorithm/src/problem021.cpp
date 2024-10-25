#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll combination(int n, int r) {
	ll result = 1LL;
	for (ll i = 0LL; i < r; i++) {
		result *= n - i;
		result /= i + 1;
	}
	return result;
}

int main() {
	int n, r;
	cin >> n >> r;
	cout << combination(n, r) << endl;
	return 0;
}
