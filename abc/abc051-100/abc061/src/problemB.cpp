#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> count(n, 0);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		count[a - 1]++;
		count[b - 1]++;
	}
	for (int &ci : count) {
		cout << ci << endl;
	}
	return 0;
}
