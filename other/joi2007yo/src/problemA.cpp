#include <bits/stdc++.h>
using namespace std;

const int N = 4;

int main() {
	vector<int> a(N), b(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> b[i];
	}
	cout << max(accumulate(a.begin(), a.end(), 0), accumulate(b.begin(), b.end(), 0)) << endl;
	return 0;
}
