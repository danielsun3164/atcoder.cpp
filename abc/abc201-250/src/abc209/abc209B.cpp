#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, x;
	cin >> n >> x;
	int s = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s += a - (1 & i);
	}
	cout << ((s <= x) ? "Yes" : "No") << endl;
	return 0;
}
