#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		n -= a;
	}
	cout << ((n >= 0) ? n : -1) << endl;
	return 0;
}
