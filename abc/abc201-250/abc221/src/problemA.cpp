#include <bits/stdc++.h>
using namespace std;

const static int N = 5;

int main(void) {
	int a, b;
	cin >> a >> b;
	cout << (1LL << ((a - b) * N)) << endl;
	return 0;
}
