#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	return (0 == b) ? a : gcd(b, a % b);
}

int main(void) {
	int w, h;
	cin >> w >> h;
	int g = gcd(w, h);
	cout << (w / g) << ":" << (h / g) << endl;
	return 0;
}
