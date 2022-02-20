#include <bits/stdc++.h>
using namespace std;

string compare(int a, int b) {
	return (a == b) ? "=" : ((a > b) ? ">" : "<");
}

string compare(int a, int b, int c) {
	if (1 & c) {
		return compare(a, b);
	} else {
		return compare(abs(a), abs(b));
	}
}

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	cout << compare(a, b, c) << endl;
	return 0;
}
