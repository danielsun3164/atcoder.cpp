#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, s, d;
	cin >> n >> s >> d;
	bool r = false;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if ((x < s) && (y > d)) {
			r = true;
		}
	}
	cout << (r ? "Yes" : "No") << endl;
	return 0;
}
