#include <bits/stdc++.h>
#include <atcoder/internal_math>
using namespace std;

int gcd(int a, int b) {
	if (0 == b) {
		return a;
	}
	return gcd(b, a % b);
}

long long solve(long long n, long long s, long long k) {
	int g = gcd(n, gcd(s, k));
	if (g > 1) {
		n /= g;
		s /= g;
		k /= g;
	}
	pair<long long, long long> p = atcoder::internal::inv_gcd(k, n);
	if (1L != p.first) {
		return -1L;
	}
	return atcoder::internal::safe_mod(p.second * (n - s), n);
}

int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long n, s, k;
		cin >> n >> s >> k;
		cout << solve(n, s, k) << endl;
	}
	return 0;
}
