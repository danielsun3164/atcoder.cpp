#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if ((0 == (1 & a)) && (0 != a % 3) && (0 != a % 5)) {
			cout << "DENIED" << endl;
			return 0;
		}
	}
	cout << "APPROVED" << endl;
	return 0;
}
