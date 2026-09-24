#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<string> s(n);
	for (string &si : s) {
		cin >> si;
		sort(si.begin(), si.end());
	}
	vector<int> index(n, 0);
	string answer;
	for (char c = 'a'; c <= 'z'; c++) {
		int mn = 50;
		for (int i = 0; i < n; i++) {
			int count = 0;
			while ((index[i] < int(s[i].size())) && (c == s[i][index[i]])) {
				index[i]++;
				count++;
			}
			mn = min(mn, count);
		}
		answer += string(mn, c);
	}
	cout << answer << endl;
	return 0;
}
