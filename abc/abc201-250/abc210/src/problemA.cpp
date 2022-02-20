#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, a, x, y;
	cin >> n >> a >> x >> y;
	cout << (min(a, n) * x + max(0, n - a) * y) << endl;
	return 0;
}
