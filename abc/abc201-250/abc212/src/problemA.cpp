#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b;
	cin >> a >> b;
	cout << ((0 == b) ? "Gold" : ((0 == a) ? "Silver" : "Alloy")) << endl;
	return 0;
}
