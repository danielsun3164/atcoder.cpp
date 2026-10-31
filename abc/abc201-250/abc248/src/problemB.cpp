#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll a, b, k;
	cin >> a >> b >> k;
	int count = 0;
	while (a < b) {
		a *= k;
		count++;
	}
	cout << count << endl;
	return 0;
}
