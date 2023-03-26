#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

const static int N = 6;

int main() {
	int n;
	cin >> n;
	mint answer = 1;
	for (int i = 0; i < n; i++) {
		mint sum = 0;
		for (int j = 0; j < N; j++) {
			int a;
			cin >> a;
			sum += a;
		}
		answer *= sum;
	}
	cout << answer.val() << endl;
	return 0;
}
