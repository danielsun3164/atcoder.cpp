#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k, a;
	cin >> n >> k >> a;
	cout << (k + n + a - 2) % n + 1 << endl;
	return 0;
}
