#include <bits/stdc++.h>
using namespace std;

const static int N = 24;

int main(void) {
	int a, b;
	cin >> a >> b;
	cout << ((a + b) % N) << endl;
	return 0;
}
