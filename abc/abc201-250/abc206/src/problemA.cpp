#include <bits/stdc++.h>
using namespace std;

const int N = 206;

int main(void) {
	int n;
	cin >> n;
	int p = n * 108 / 100;
	cout << ((N == p) ? "so-so" : ((p > N) ? ":(" : "Yay!")) << endl;
	return 0;
}
