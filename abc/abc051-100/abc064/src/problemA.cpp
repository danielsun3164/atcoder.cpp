#include <bits/stdc++.h>
using namespace std;

const int N = 10;

int main(void) {
	int r, g, b;
	cin >> r >> g >> b;
	int n = g * N + b;
	cout << ((n & 3) ? "NO" : "YES") << endl;
	return 0;
}
