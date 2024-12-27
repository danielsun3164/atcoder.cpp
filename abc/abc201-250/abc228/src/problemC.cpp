#include <bits/stdc++.h>
using namespace std;

const static int N = 3;
const static int M = 300;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> p(n, 0), s(n, 0);
	for (int i = 0; i < n; i++) {
		int t;
		for (int j = 0; j < N; j++) {
			cin >> t;
			p[i] += t;
		}
		s[i] = p[i];
	}
	sort(s.begin(), s.end());
	for (int i = 0; i < n; i++) {
		cout << ((p[i] + M >= s[n - k]) ? "Yes" : "No") << endl;
	}
	return 0;
}
