#include <iostream>
#include <atcoder/math>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long n, m, a, b;
		cin >> n >> m >> a >> b;
		cout << atcoder::floor_sum(n, m, a, b) << endl;
	}
	return 0;
}
