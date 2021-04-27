#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	cout << max(0, *min_element(b.begin(), b.end()) - *max_element(a.begin(), a.end()) + 1) << endl;
	return 0;
}
