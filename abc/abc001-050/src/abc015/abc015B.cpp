#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, count = 0, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a > 0) {
			count++;
			sum += a;
		}
	}
	cout << ((sum + count - 1) / count) << endl;
	return 0;
}
