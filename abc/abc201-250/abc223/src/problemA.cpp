#include <bits/stdc++.h>
using namespace std;

const static int HUNDRED = 100;

int main(void) {
	int x;
	cin >> x;
	cout << (((x > 0) && (0 == x % HUNDRED)) ? "Yes" : "No") << endl;
	return 0;
}
