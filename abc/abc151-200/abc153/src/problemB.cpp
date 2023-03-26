#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int h, n;
	cin >> h >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << ((h > accumulate(a.begin(), a.end(), 0)) ? "No" : "Yes") << endl;
	return 0;
}
