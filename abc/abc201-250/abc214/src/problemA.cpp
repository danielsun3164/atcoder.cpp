#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	cout << ((n <= 125) ? 4 : (n >= 212) ? 8 : 6) << endl;
	return 0;
}
