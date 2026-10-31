#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int x, a, b;
	cin >> x >> a >> b;
	cout << ((a >= b) ? "delicious" : ((b - a <= x) ? "safe" : "dangerous")) << endl;
	return 0;
}
