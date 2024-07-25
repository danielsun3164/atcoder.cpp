#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static char WHITE = '.';
const static char BLACK = '#';

int main(void) {
	ll n, a, b, p, q, r, s;
	cin >> n >> a >> b >> p >> q >> r >> s;
	vector<string> answer(q - p + 1, string(s - r + 1, WHITE));
	for (ll k = max(p - a, max(1 - a, 1 - b)); k <= min(q - a, min(n - a, n - b)); k++) {
		if ((b + k >= r) && (b + k <= s)) {
			answer[a + k - p][b + k - r] = BLACK;
		}
	}
	for (ll k = max(p - a, max(1 - a, b - n)); k <= min(q - a, min(n - a, b - 1)); k++) {
		if ((b - k >= r) && (b - k <= s)) {
			answer[a + k - p][b - k - r] = BLACK;
		}
	}
	for (string ai : answer) {
		cout << ai << endl;
	}
	return 0;
}
