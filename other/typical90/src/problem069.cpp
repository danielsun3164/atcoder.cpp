#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;
using ll = long long;

int main() {
	ll n, k;
	cin >> n >> k;
	mint answer;
	if (1LL == n) {
		answer = k;
	} else {
		answer = mint(k) * mint(k - 1) * mint(k - 2).pow(n - 2);
	}
	cout << answer.val() << endl;
	return 0;
}
