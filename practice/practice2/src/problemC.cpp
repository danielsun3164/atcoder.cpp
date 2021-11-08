#include <bits/stdc++.h>
#include <atcoder/math>
using namespace std;
using ll = long long;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		ll n, m, a, b;
		cin >> n >> m >> a >> b;
		cout << atcoder::floor_sum(n, m, a, b) << endl;
	}
	return 0;
}
