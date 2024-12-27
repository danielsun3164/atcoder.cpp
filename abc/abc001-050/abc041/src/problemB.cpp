#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	mint answer = mint(1) * a * b * c;
	cout << answer.val() << endl;
	return 0;
}