#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = a; i < a * b; i += a) {
		if (c == i % b) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
