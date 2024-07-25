#include <bits/stdc++.h>
using namespace std;

const static int N = 42;

int main(void) {
	int n;
	cin >> n;
	cout << "AGC" << setfill('0') << setw(3) << ((n < N) ? n : n + 1) << endl;
	return 0;
}
