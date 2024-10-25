#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

const static int N = 4;

int main() {
	ll n;
	cin >> n;
	cout << ((mint(N).pow(n + 1) - 1) / mint(N - 1)).val() << endl;
	return 0;
}
