#include <bits/stdc++.h>
using namespace std;

const static int N = 100;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << (accumulate(a.begin(), a.end(), 0) % N) << endl;
	return 0;
}
