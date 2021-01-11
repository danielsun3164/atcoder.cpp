#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, C;
	cin >> n >> C;
	map<int, long long> m;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		m[a] += c;
		m[b + 1] -= c;
	}
	auto pre = m.begin();
	long long value = pre->second, ans = 0L;
	for (auto it = next(m.begin()); it != m.end(); it++) {
		ans += (it->first - pre->first) * ((value > C) ? C : value);
		value += it->second;
		pre = it;
	}
	cout << ans << endl;
	return 0;
}
