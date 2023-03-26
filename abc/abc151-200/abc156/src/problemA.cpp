#include <bits/stdc++.h>
using namespace std;

const int N = 10;

int main(void) {
	int n, r;
	cin >> n >> r;
	cout << (r + max(0, N - n) * 100) << endl;
	return 0;
}
