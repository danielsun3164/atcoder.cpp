#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	mint answer = 1;
	answer = answer * (a + 1) * a / 2;
	answer = answer * (b + 1) * b / 2;
	answer = answer * (c + 1) * c / 2;
	cout << answer.val() << endl;
	return 0;
}
