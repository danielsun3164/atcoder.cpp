#include <bits/stdc++.h>
using namespace std;

const static int N = 15;
const static int M1 = 800;
const static int M2 = 200;

int main(void) {
	int n;
	cin >> n;
	cout << (n * M1 - n / N * M2) << endl;
	return 0;
}
