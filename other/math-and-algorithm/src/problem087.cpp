#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

int main() {
	int n;
	cin >> n;
	mint mn = n + 1;
	mn = (mn * n) / 2;
	mn *= mn;
	cout << mn.val() << endl;
	return 0;
}
