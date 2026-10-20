#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << ((pair{a, b} <= pair{c, d}) ? "Takahashi" : "Aoki") << endl;
	return 0;
}
