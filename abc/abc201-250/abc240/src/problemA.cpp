#include <bits/stdc++.h>
using namespace std;

const static int N = 12'800'000;

int main(void) {
	int a, b;
	cin >> a >> b;
	cout << (((a + 1 == b) || (a + 9 == b)) ? "Yes" : "No") << endl;
	return 0;
}
