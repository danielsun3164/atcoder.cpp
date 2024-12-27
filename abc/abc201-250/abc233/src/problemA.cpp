#include <bits/stdc++.h>
using namespace std;

const static int TEN = 10;

int main(void) {
	int x, y;
	cin >> x >> y;
	cout << ((x >= y) ? 0 : (y - x + TEN - 1) / TEN) << endl;
	return 0;
}
