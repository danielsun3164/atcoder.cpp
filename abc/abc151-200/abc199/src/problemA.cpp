#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	cout << ((a * a + b * b < c * c) ? "Yes" : "No") << endl;
	return 0;
}
