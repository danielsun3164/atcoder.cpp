#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	map<string, int> m;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		m[s]++;
	}
	cout << max_element(m.begin(), m.end(), [](const auto a, const auto b) {
		return a.second < b.second;
	})->first << endl;
	return 0;
}
