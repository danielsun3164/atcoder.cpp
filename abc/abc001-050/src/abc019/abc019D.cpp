#include <bits/stdc++.h>
using namespace std;

pair<int, int> get_max(int n, int now) {
	int m = 0, mi;
	for (int i = 1; i <= n; i++) {
		if (now != i) {
			cout << "? " << now << " " << i << endl;
			int x;
			cin >> x;
			if (x > m) {
				m = x;
				mi = i;
			}
		}
	}
	return {m,mi};
}

int main(void) {
	int n;
	cin >> n;
	pair<int, int> t = get_max(n, 1);
	pair<int, int> r = get_max(n, t.second);
	cout << "! " << r.first << endl;
	return 0;
}
