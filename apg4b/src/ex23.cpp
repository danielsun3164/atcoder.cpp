#include <bits/stdc++.h>
using namespace std;

int main() {
	map<int, int> m;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		m[a]++;
	}
	int max = 0, maxIndex = 0;
	for (pair<int, int> p : m) {
		if (p.second > max) {
			max = p.second;
			maxIndex = p.first;
		}
	}
	cout << maxIndex << " " << max << endl;
}
