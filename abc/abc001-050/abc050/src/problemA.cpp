#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b;
	string op;
	cin >> a >> op >> b;
	cout << (("+" == op) ? a + b : a - b) << endl;
	return 0;
}
