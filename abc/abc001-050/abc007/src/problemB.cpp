#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string a;
	cin >> a;
	if ("a" == a) {
		cout << -1 << endl;
	} else if (a.size() > 1) {
		cout << a.substr(0, a.size() - 1) << endl;
	} else {
		a[0]--;
		cout << a << endl;
	}
	return 0;
}
