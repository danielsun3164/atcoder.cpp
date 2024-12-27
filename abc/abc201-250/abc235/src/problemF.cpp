#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const static int TEN = 10;
const static int N = 1 << TEN;

int main(void) {
	string n;
	int m;
	cin >> n >> m;
	int mask = 0;
	for (int i = 0; i < m; i++) {
		int c;
		cin >> c;
		mask |= 1 << c;
	}
	int digits = 0;
	mint spre = 0;
	vector<mint> dpc(N, 0), dps(N, 0);
	for (int i = 0; i < int(n.size()); i++) {
		vector<mint> new_dpc(N, 0), new_dps(N, 0);
		for (int j = 1; j < N; j++) {
			for (int d = 0; d < TEN; d++) {
				new_dpc[j | 1 << d] += dpc[j];
				new_dps[j | 1 << d] += dps[j] * TEN + dpc[j] * d;
			}
		}
		if (i) {
			for (int d = 1; d < TEN; d++) {
				new_dpc[1 << d]++;
				new_dps[1 << d] += d;
			}
		}

		int c = n[i] - '0';
		for (int d = (not i); d < c; d++) {
			new_dpc[digits | 1 << d]++;
			new_dps[digits | 1 << d] += spre * TEN + d;
		}
		dpc = move(new_dpc);
		dps = move(new_dps);
		digits |= 1 << c;
		spre = spre * TEN + c;
	}
	mint answer = 0;
	for (int i = 0; i < N; i++) {
		if (mask == (i & mask)) {
			answer += dps[i];
		}
	}
	if (mask == (digits & mask)) {
		answer += spre;
	}
	cout << answer.val() << endl;
	return 0;
}
