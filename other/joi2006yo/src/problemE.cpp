#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

namespace mp = boost::multiprecision;

/*
 * https://atcoder.jp/contests/joi2006yo/submissions/13554106 を参考に作成
 */
int main() {
	int n, k, m, r;
	cin >> n >> k >> m >> r;
	if (0 == m) {
		mp::cpp_int x = 10, y = mp::pow(x, r), z = y / n;
		cout << z / y << "." << setw(r) << setfill('0') << z % y << endl;
	} else {
		mp::cpp_int x = 10, y = mp::pow(x, r), z = y;
		for (int i = 1; i < n; i++) {
			z += y / i;
		}
		z /= n;
		cout << z / y << "." << setw(r) << setfill('0') << z % y << endl;
	}
	return 0;
}
