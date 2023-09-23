#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	int d = (a + (c - 1)) / c * c;
	cout << ((d <= b) ? d : -1) << endl;
	return 0;
}
