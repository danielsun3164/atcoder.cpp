#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, x;
	cin >> n >> x;
	bool first = true;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a != x) {
			cout << (first ? "" : " ") << a;
			first = false;
		}
	}
	cout << endl;
	return 0;
}
