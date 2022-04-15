#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	return (0 == b) ? a : gcd(b, a % b);
}

int main(void) {
	int a, b, n;
	cin >> a >> b >> n;
	int g = a * b / gcd(a, b);
	cout << ((n + g - 1) / g * g) << endl;
	return 0;
}
