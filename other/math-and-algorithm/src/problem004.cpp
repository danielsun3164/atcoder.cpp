#include <bits/stdc++.h>
using namespace std;

const static int N = 3;

int main() {
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	cout << accumulate(a.begin(), a.end(), 1, multiplies<int>()) << endl;
	return 0;
}
