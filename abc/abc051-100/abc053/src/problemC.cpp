#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 6;
const static int M = 11;

int main(void) {
	ll x;
	cin >> x;
	ll answer = 1L;
	x -= N;
	if (x > 0) {
		answer += x / M * 2;
		x %= M;
		if (x > 0) {
			answer += (x >= N) ? 2 : 1;
		}
	}
	cout << answer << endl;
	return 0;
}
