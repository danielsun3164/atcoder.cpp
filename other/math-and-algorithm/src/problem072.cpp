#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	for (int i = (b - a); i >= 1; i--) {
		if (b / i > (a + i - 1) / i) {
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}
