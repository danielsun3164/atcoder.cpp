#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	a += (1 == c) ? 1 : 0;
	cout << ((a > b) ? "Takahashi" : "Aoki") << endl;
	return 0;
}
