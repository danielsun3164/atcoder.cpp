#include <bits/stdc++.h>
using namespace std;

const static int N = 12'800'000;

int main(void) {
	double x;
	cin >> x;
	cout << fixed << setprecision(20) << sqrt(x * (N + x)) << endl;
	return 0;
}
