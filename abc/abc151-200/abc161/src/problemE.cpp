#include <bits/stdc++.h>
using namespace std;

const char OK = 'o';

int main(void) {
	int n, k, c;
	string s;
	cin >> n >> k >> c >> s;
	vector<int> l(k), r(k);
	int idx = 0;
	for (int i = 0; i < k; i++) {
		while (OK != s[idx]) {
			idx++;
		}
		l[i] = idx;
		idx += c + 1;
	}
	idx = n - 1;
	for (int i = k - 1; i >= 0; i--) {
		while (OK != s[idx]) {
			idx--;
		}
		r[i] = idx;
		idx -= c + 1;
	}
	for (int i = 0; i < k; i++) {
		if (l[i] == r[i]) {
			cout << l[i] + 1 << endl;
		}
	}
	return 0;
}
