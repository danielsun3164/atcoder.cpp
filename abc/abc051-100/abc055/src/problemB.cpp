#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

int main(void) {
	int n;
	cin >> n;
	mint answer = 1;
	for (int i = 2; i <= n; i++) {
		answer *= i;
	}
	cout << answer.val() << endl;
	return 0;
}
