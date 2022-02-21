#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

vector<int> divs;

void calc_divisors(int k) {
	for (int i = 1; i * i <= k; i++) {
		if (0 == k % i) {
			divs.emplace_back(i);
			if (i != k / i) {
				divs.emplace_back(k / i);
			}
		}
	}
	sort(divs.begin(), divs.end());
}

int main(void) {
	int n, k;
	cin >> n >> k;
	calc_divisors(k);
	vector<mint> sum(divs.size());
	mint ans = 0;
	for (int i = divs.size() - 1; i >= 0; i--) {
		ll div_max = n / divs[i] * divs[i];
		sum[i] = (divs[i] + div_max) * (div_max / divs[i]) / 2;
		for (int j = i + 1; j < int(divs.size()); j++) {
			if (0 == divs[j] % divs[i]) {
				sum[i] -= sum[j];
			}
		}
		ans += sum[i] / divs[i];
	}
	ans *= k;
	cout << ans.val() << endl;
	return 0;
}
