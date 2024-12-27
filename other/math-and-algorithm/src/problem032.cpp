#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	set<int> a;
	for (int i = 0; i < n; i++) {
		int ai;
		cin >> ai;
		a.insert(ai);
	}
	cout << (a.contains(x) ? "Yes" : "No") << endl;
	return 0;
}
