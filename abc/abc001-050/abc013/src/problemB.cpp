#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b;
	cin >> a >> b;
	cout << min(abs(a - b), min(a, b) + 10 - max(a, b)) << endl;
	return 0;
}
