#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, answer = INT_MAX >> 1;
	cin >> n;
	for (int i = 1; i * i <= n; i++) {
		answer = min(answer, abs(n / i - i) + n % i);
	}
	cout << answer << endl;
	return 0;
}
