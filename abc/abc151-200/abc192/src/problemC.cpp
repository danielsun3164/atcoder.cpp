#include <bits/stdc++.h>
using namespace std;

int f(int n) {
	string s = to_string(n);
	sort(s.rbegin(), s.rend());
	int g1 = stoi(s);
	sort(s.begin(), s.end());
	int g2 = stoi(s);
	return g1 - g2;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> a(k + 1);
	a[0] = n;
	for (int i = 1; i <= k; i++) {
		a[i] = f(a[i - 1]);
	}
	cout << a[k] << endl;
	return 0;
}
