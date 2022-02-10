#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string x;
	cin >> x;
	bool r1 = true, r2 = true;
	for (int i = 1; i < int(x.size()); i++) {
		if (x[i] != x[i - 1]) {
			r1 = false;
		}
		if (x[i] != ((x[i - 1] - '0') + 1) % 10 + '0') {
			r2 = false;
		}
	}
	cout << ((r1 || r2) ? "Weak" : "Strong") << endl;
	return 0;
}
