#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main(void) {
	ull n;
	cin >> n;
	cout << (ULLONG_WIDTH - 1 - __builtin_clzll(n)) << endl;
	return 0;
}
