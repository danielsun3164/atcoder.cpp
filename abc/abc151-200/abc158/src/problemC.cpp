#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b;
	cin >> a >> b;
	for (int i = b * 10; i < (b + 1) * 10; i++) {
		if ((a == i * 8 / 100) && (b == i / 10)) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
