#include <bits/stdc++.h>
using namespace std;

const static int N = 3;

int main(void) {
	int mx = 0, sum = 0;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		mx = max(mx, a);
		sum += a;
	}
	cout << ((sum == (mx << 1)) ? "Yes" : "No") << endl;
	return 0;
}
