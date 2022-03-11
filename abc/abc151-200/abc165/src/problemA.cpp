#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int k, a, b;
	cin >> k >> a >> b;
	cout << (((0 == a % k) || (b / k > a / k)) ? "OK" : "NG") << endl;
	return 0;
}
