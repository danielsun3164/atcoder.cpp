#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum(int n) {
	return n * (ll) (n + 1) / 2;
}

int main(void) {
	int n;
	cin >> n;
	cout << sum(n) - sum(n / 3) * 3 - sum(n / 5) * 5 + sum(n / 15) * 15 << endl;
	return 0;
}
