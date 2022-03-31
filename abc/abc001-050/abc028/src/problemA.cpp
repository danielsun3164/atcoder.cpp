#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	if (100 == n) {
		cout << "Perfect" << endl;
	} else if (n >= 90) {
		cout << "Great" << endl;
	} else if (n >= 60) {
		cout << "Good" << endl;
	} else {
		cout << "Bad" << endl;
	}
	return 0;
}
