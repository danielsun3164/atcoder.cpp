#include <bits/stdc++.h>
using namespace std;

const int N = 2001;

int main(void) {
	int n;
	cin >> n;
	vector<bool> v(N + 1, false);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v[a] = true;
	}
	for (int i = 0; i <= N; i++) {
		if (!v[i]) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}
