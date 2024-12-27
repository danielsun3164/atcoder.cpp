#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LLONG_MAX >> 1;

int main() {
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	ll answer = -INF;
	if ((b >= 0) && (d >= 0)) {
		answer = max(answer, b * d);
	}
	if ((a <= 0) && (c <= 0)) {
		answer = max(answer, a * c);
	}
	if ((b <= 0) && (c >= 0)) {
		answer = max(answer, b * c);
	}
	if ((a >= 0) && (d <= 0)) {
		answer = max(answer, a * d);
	}
	if (((a <= 0) && (b >= 0)) || ((c <= 0) && (d >= 0))) {
		answer = max(answer, 0LL);
	}
	cout << answer << endl;
	return 0;
}
