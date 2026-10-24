#include <bits/stdc++.h>
#include <atcoder/convolution>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = modint998244353;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> count(n + 1);
	vector<vector<mint>> pi;
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		pi.push_back({count[c], 1});
		count[c]++;
	}
	while (pi.size() >= 2) {
		vector<vector<mint>> next;
		for (int i = 0; i < int(pi.size()) - 1; i += 2) {
			next.emplace_back(convolution(pi[i], pi[i + 1]));
		}
		if (1 & pi.size()) {
			next.emplace_back(pi.back());
		}
		swap(pi, next);
	}
	vector<mint> f = move(pi.back());
	mint answer = 0;
	for (int i = 0; i < int(f.size()); i++) {
		if (((n - i) <= k) && ((1 & k) == (1 & (n - i)))) {
			answer += f[i];
		}
	}
	cout << answer.val() << endl;
	return 0;
}
