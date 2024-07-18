#include <bits/stdc++.h>
using namespace std;

const static int N = 24;

int main(void) {
	int s, t, x;
	cin >> s >> t >> x;
	if (t < s) {
		t += N;
		if (x < s) {
			x += N;
		}
	}
	cout << (((s <= x) && (x < t)) ? "Yes" : "No") << endl;
	return 0;
}
