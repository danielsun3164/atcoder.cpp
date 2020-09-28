#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x > y) {
			a += x + y;
		} else if (y > x) {
			b += x + y;
		} else {
			a += x;
			b += y;
		}
	}
	cout << a << " " << b << endl;
	return 0;
}
