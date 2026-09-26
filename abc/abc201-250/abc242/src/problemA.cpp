#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c, x;
	cin >> a >> b >> c >> x;
	cout << setprecision(20);
	cout << ((x <= a) ? 1.0 : ((x > b) ? 0.0 : c / double(b - a))) << endl;
	return 0;
}
