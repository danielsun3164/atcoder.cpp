#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	cout << (((a == c) && (0 == b)) ? "?" : ((c == a + b) ? "+" : ((c == a - b) ? "-" : "!")))
		 << endl;
	return 0;
}
