#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b;
	cin >> a >> b;
	cout << (((a <= b) && (b <= 6 * a)) ? "Yes" : "No") << endl;
	return 0;
}
