#include <bits/stdc++.h>
using namespace std;

int s(int n) {
	int r = 0;
	while (n > 0) {
		r += n % 10;
		n /= 10;
	}
	return r;
}

int main(void) {
	int a, b;
	cin >> a >> b;
	cout << max(s(a), s(b)) << endl;
	return 0;
}
