#include <bits/stdc++.h>
using namespace std;

long long x;
map<long long, long long> m;

long long solve(long long y) {
	if (x >= y) {
		return x - y;
	}
	if (m.find(y) != m.end()) {
		return m[y];
	}
	long long r = abs(y - x);
	if (1L == (1L & y)) {
		r = min(r, solve((y + 1) >> 1) + 2);
		r = min(r, solve((y - 1) >> 1) + 2);
	} else {
		r = min(r, solve(y >> 1) + 1);
	}
	m[y] = r;
	return r;
}

int main() {
	long long y;
	cin >> x >> y;
	cout << solve(y) << endl;
	return 0;
}
