#include <bits/stdc++.h>
using namespace std;

const int N = 10;

int main(void) {
	int a, b;
	cin >> a >> b;
	cout << ((a + b >= N) ? "error" : to_string(a + b)) << endl;
	return 0;
}
