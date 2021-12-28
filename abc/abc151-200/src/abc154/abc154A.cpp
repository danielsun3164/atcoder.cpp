#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s, t, u;
	int a, b;
	cin >> s >> t >> a >> b >> u;
	cout << ((u == s) ? a - 1 : a) << " " << ((u == t) ? b - 1 : b) << endl;
	return 0;
}
