#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll fn(int a, ll b, ll x) {
	return a * x / b - a * (x / b);
}

int main(void) {
	int a;
	ll b, n;
	cin >> a >> b >> n;
	cout << fn(a, b, min(b - 1, n)) << endl;
	return 0;
}
