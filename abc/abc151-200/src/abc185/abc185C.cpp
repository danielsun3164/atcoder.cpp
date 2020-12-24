#include <bits/stdc++.h>
using namespace std;

long long fn(int n, int m) {
	long long r = 1L;
	for (int i = 0; i < m; i++) {
		r *= n - i;
		r /= i + 1;
	}
	return r;
}

int main(void) {
	int l;
	cin >> l;
	cout << fn(l - 1, 11) << endl;
	return 0;
}
