#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int takahashi = b * c, aoki = a * d;
	cout << ((takahashi == aoki) ? "DRAW" : ((takahashi > aoki) ? "TAKAHASHI" : "AOKI")) << endl;
	return 0;
}
