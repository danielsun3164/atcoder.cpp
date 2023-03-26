#include <bits/stdc++.h>
using namespace std;

const static int N = 10;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> prime_factors(n + 1, 0), counts(N + 1, 0);
	for (int i = 2; i <= n; i++) {
		if (0 == prime_factors[i]) {
			counts[1]++;
			for (int j = i + i; j <= n; j += i) {
				prime_factors[j]++;
			}
		} else {
			counts[prime_factors[i]]++;
		}
	}
	cout << accumulate(counts.begin() + k, counts.end(), 0) << endl;
	return 0;
}
