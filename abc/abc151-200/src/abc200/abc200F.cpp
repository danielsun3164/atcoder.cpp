#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;

using mint = atcoder::modint1000000007;
using ll = long long;

const char WILD_CARD = '?';
const int INV2 = 500'000'004;

int f(char a, char b) {
	return ((WILD_CARD == a) || (WILD_CARD == b)) ? INV2 : ((a == b) ? 0 : 1);
}

int main() {
	string s;
	ll k;
	cin >> s >> k;
	int q = 0, n = int(s.size());
	if (1LL == k * n) {
		cout << 0 << endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		if (WILD_CARD == s[i]) {
			q++;
		}
	}
	mint m, t = 2;
	for (int i = 0; i < n; i++) {
		m += f(s[i], s[(i + 1) % n]);
	}
	m *= k;
	m *= t.pow(k * q);
	m *= INV2;
	cout << m.val() << endl;
	return 0;
}
