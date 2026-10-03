#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string a, b, c;
	cin >> a >> b >> c;
	cout << (((a.back() == *b.begin()) && (b.back() == *c.begin())) ? "YES" : "NO") << endl;
	return 0;
}
