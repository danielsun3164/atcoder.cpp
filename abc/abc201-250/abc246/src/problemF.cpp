#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const int N = 26;

int main(void) {
	int n, l;
	cin >> n >> l;
	vector<int> v(n, 0);
	for (int &vi : v) {
		string s;
		cin >> s;
		for (char &c : s) {
			vi |= 1 << (c - 'a');
		}
	}
	mint answer = 0;
	for (int bit = 1; bit < (1 << n); bit++) {
		int mask = (1 << N) - 1;
		for (int j = 0; j < n; j++) {
			if (bit & (1 << j)) {
				mask &= v[j];
			}
		}
		mint pc = __builtin_popcount((unsigned int)mask);
		if (1 & __builtin_popcount((unsigned int)bit)) {
			answer += pc.pow(l);
		} else {
			answer -= pc.pow(l);
		}
	}
	cout << answer.val() << endl;
	return 0;
}
