#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(int k, int s) {
	if (s <= k) {
		return s + 1;
	} else if (s > 2 * k) {
		return 0LL;
	} else {
		return 2 * k - s + 1;
	}
}

int main(void) {
	int k, s;
	cin >> k >> s;
	ll answer = 0LL;
	for (int x = 0; x <= min(k, s); x++) {
		answer += calc(k, s - x);
	}
	cout << answer << endl;
	return 0;
}
