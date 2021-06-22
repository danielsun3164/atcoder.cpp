#include <bits/stdc++.h>
using namespace std;

string compare(int a, int b, int c) {
	if (1 & c) {
		return (a == b) ? "=" : ((a > b) ? ">" : "<");
	} else {
		return compare(abs(a), abs(b), c >> 1);
	}
}

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	cout << compare(a, b, c) << endl;
	return 0;
}
