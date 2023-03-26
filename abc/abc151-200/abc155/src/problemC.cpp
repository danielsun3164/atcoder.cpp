#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, max_value = 0;
	cin >> n;
	map<string, int> m;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		m[s]++;
		if (m[s] > max_value) {
			max_value = m[s];
		}
	}
	for (auto p : m) {
		if (max_value == p.second) {
			cout << p.first << endl;
		}
	}
	return 0;
}
