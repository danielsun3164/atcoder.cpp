#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int e = c * d - b;
	cout << ((e > 0) ? (a + e - 1) / e : -1) << endl;
	return 0;
}
