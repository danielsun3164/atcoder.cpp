#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, sum = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		sum += a;
	}
	cout << (((k >= sum) && (0 == (1 & (k - sum)))) ? "Yes" : "No") << endl;
	return 0;
}
