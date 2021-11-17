#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b;
	cin >> a >> b;
	cout << (string(max(a, b), '0' + min(a, b))) << endl;
	return 0;
}
