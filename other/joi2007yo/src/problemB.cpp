#include <bits/stdc++.h>
using namespace std;

const int N = 30;

int main() {
	vector<bool> v(31, true);
	for (int i = 0; i < N - 2; i++) {
		int a;
		cin >> a;
		v[a] = false;
	}
	for (int i = 1; i <= N; i++) {
		if (v[i]) {
			cout << i << endl;
		}
	}
	return 0;
}
