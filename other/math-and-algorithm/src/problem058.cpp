#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, x, y;
	cin >> n >> x >> y;
	ll d = n - abs(x) - abs(y);
	cout << (((d >= 0) && !(1 & d)) ? "Yes" : "No") << endl;
	return 0;
}
