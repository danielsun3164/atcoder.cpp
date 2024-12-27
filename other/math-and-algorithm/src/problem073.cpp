#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

const static int N = 2;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}
	vector<mint> pow2(n);
	pow2[0] = 1;
	for (int i = 1; i < n; i++) {
		pow2[i] = pow2[i - 1] * N;
	}
	mint answer = 0;
	for (int i = 0; i < n; i++) {
		answer += a[i] * pow2[i];
	}
	cout << answer.val() << endl;
	return 0;
}
