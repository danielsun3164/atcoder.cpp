#include <bits/stdc++.h>
using namespace std;

struct Data {
	int x, y, c;
};

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<Data> v(n + m);
	for (int i = 0; i < n; i++) {
		cin >> v[i].x;
	}
	for (int i = 0; i < n; i++) {
		cin >> v[i].y;
		v[i].c = 1;
	}
	for (int i = 0; i < m; i++) {
		cin >> v[n + i].x;
	}
	for (int i = 0; i < m; i++) {
		cin >> v[n + i].y;
		v[n + i].c = 0;
	}
	sort(v.begin(), v.end(),
		 [](Data a, Data b) { return (a.y == b.y) ? (a.c < b.c) : (a.y > b.y); });
	multiset<int> st;
	for (Data d : v) {
		if (1 == d.c) {
			auto itr = st.lower_bound(d.x);
			if (itr == st.end()) {
				cout << "No" << endl;
				return 0;
			}
			st.erase(itr);
		} else {
			st.insert(d.x);
		}
	}
	cout << "Yes" << endl;
	return 0;
}
