#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	set<int> st;
	int now = 1, count = 1;
	while (true) {
		int next = a[now];
		if (st.contains(next)) {
			cout << -1 << endl;
			break;
		}
		if (2 == next) {
			cout << count << endl;
			break;
		}
		st.insert(next);
		now = next;
		count++;
	}
	return 0;
}
