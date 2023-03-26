#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int v, t, s, d;
	cin >> v >> t >> s >> d;
	cout << (((v * t <= d) && (v * s >= d)) ? "No" : "Yes") << endl;
	return 0;
}
