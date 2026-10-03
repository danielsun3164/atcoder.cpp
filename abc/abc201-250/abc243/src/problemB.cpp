#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	set<int> ast;
	for (int &ai : a) {
		cin >> ai;
		ast.insert(ai);
	}
	for (int &bi : b) {
		cin >> bi;
	}
	int answer1 = 0, answer2 = 0;
	for (int i = 0; i < n; i++) {
		answer1 += (a[i] == b[i]) ? 1 : 0;
	}
	for (int bi : b) {
		answer2 += ast.count(bi);
	}
	cout << answer1 << endl;
	cout << (answer2 - answer1) << endl;
	return 0;
}
