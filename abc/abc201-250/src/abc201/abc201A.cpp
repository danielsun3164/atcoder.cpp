#include <bits/stdc++.h>
using namespace std;

const int N = 3;

int main(void) {
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	cout << ((a[2] - a[1] == a[1] - a[0]) ? "Yes" : "No") << endl;
	return 0;
}
