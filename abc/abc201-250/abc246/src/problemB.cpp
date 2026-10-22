#include <bits/stdc++.h>
using namespace std;

int main(void) {
	double a, b;
	cin >> a >> b;
	double d = hypot(a, b);
	cout << (a / d) << " " << (b / d) << endl;
	return 0;
}
