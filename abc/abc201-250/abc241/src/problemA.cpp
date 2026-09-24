#include <bits/stdc++.h>
using namespace std;

const static int N = 10;
const static int M = 3;

int main(void) {
	vector<int> a(N);
	for (int &ai : a) {
		cin >> ai;
	}
	int now = 0;
	for (int i = 0; i < M; i++) {
		now = a[now];
	}
	cout << now << endl;
	return 0;
}
