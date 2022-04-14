#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, d;
	cin >> a >> d;
	cout << max((a + 1) * d, a * (d + 1)) << endl;
	return 0;
}
