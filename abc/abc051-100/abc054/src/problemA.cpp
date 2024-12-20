#include <bits/stdc++.h>
using namespace std;

const static int N = 13;

int main(void) {
	int a, b;
	cin >> a >> b;
	a = (a + N - 2) % N, b = (b + N - 2) % N;
	cout << ((a == b) ? "Draw" : ((a < b) ? "Bob" : "Alice")) << endl;
	return 0;
}
