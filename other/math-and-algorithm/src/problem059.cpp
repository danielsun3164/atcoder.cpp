#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::static_modint<10>;

int main() {
	ll n;
	cin >> n;
	cout << mint(2).pow(n).val() << endl;
	return 0;
}
