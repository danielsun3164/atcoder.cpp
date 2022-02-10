#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k, m;
	cin >> n >> k >> m;
	int s = n * m;
	for (int i = 0; i < n - 1; i++) {
		int a;
		cin >> a;
		s -= a;
	}
	cout << ((s <= k) ? max(s, 0) : -1) << endl;
	return 0;
}
