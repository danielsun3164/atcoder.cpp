#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	mint ma(a), mb(b), mc(c);
	mint sum = (ma * mb.inv() + ma * mc.inv() - 1).inv();
	mint mr = ma * sum * mc.inv() - 1;
	mint mv = ma * sum * mb.inv() - 1;
	cout << mr.val() << " " << mv.val() << endl;
	return 0;
}
