#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	cout << (((c > a + b) && (4 * a * b) < (c - a - b) * (c - a - b)) ? "Yes" : "No") << endl;
	return 0;
}
