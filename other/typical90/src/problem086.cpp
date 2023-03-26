#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

const static int N = 60;

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> x(q), y(q), z(q);
	vector<ll> w(q);
	for (int i = 0; i < q; i++) {
		cin >> x[i] >> y[i] >> z[i] >> w[i];
		x[i]--;
		y[i]--;
		z[i]--;
	}
	mint answer = 1;
	for (int i = 0; i < N; i++) {
		vector<int> v(n);
		int count = 0;
		for (int bit = 0; bit < (1 << n); bit++) {
			bool ok = true;
			for (int j = 0; j < n; j++) {
				v[j] = (bit >> j) & 1;
			}
			for (int j = 0; j < q; j++) {
				if (((w[j] >> i) & 1) != (v[x[j]] | v[y[j]] | v[z[j]])) {
					ok = false;
					break;
				}
			}
			count += ok ? 1 : 0;
		}
		answer *= count;
	}
	cout << answer.val() << endl;
	return 0;
}
