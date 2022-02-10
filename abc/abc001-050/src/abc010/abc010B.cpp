#include <bits/stdc++.h>
using namespace std;

const int MAX = 10;
vector<int> m(MAX, -1);

int calc(int a) {
	if (-1 != m[a]) {
		return m[a];
	}
	if ((1 & a) && (2 != (a % 3))) {
		return m[a] = 0;
	} else {
		return m[a] = calc(a - 1) + 1;
	}
}

int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i < MAX; i++) {
		calc(i);
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		ans += m[a];
	}
	cout << ans << endl;
	return 0;
}
