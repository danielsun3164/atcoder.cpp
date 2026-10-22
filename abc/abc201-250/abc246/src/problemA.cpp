#include <bits/stdc++.h>
using namespace std;

const int N = 3;

int main(void) {
	vector<int> x(N), y(N);
	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}
	cout << accumulate(x.begin(), x.end(), 0, bit_xor<int>()) << " "
		 << accumulate(y.begin(), y.end(), 0, bit_xor<int>()) << endl;
	return 0;
}
