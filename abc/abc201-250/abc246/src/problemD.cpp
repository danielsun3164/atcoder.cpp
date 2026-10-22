#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 1'000'000;
const ll INF = LONG_LONG_MAX >> 1;

ll f(ll a, ll b) {
	return a * a * a + a * a * b + a * b * b + b * b * b;
}

int main(void) {
	ll n;
	cin >> n;
	ll low = 0, high = N + 1, answer = INF;
	while (low <= high) {
		ll result = f(low, high);
		if (result >= n) {
			answer = min(answer, result);
			high--;
		} else {
			low++;
		}
	}
	cout << answer << endl;
	return 0;
}
