#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	cout << ((1 & n) ? n + 1 : n - 1) << endl;
	return 0;
}
