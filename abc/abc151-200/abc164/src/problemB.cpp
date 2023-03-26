#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (((c + b - 1) / b <= (a + d - 1) / d) ? "Yes" : "No") << endl;
	return 0;
}
