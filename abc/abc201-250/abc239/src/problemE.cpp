#include <bits/stdc++.h>
using namespace std;

const static int N = 20;

void calc_p(vector<vector<int>> &edges, vector<vector<int>> &p, vector<int> &x, int now, int prev) {
	multiset<int> st;
	st.insert(x[now]);
	for (int next : edges[now]) {
		if (prev != next) {
			calc_p(edges, p, x, next, now);
			for (int pi : p[next]) {
				st.insert(pi);
				if (st.size() > N) {
					st.erase(st.begin());
				}
			}
		}
	}
	p[now].assign(st.rbegin(), st.rend());
}

int main(void) {
	int n, q;
	cin >> n >> q;
	vector<int> x(n);
	for (int &xi : x) {
		cin >> xi;
	}
	vector<vector<int>> edges(n), p(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
	}
	calc_p(edges, p, x, 0, -1);
	while (q--) {
		int v, k;
		cin >> v >> k;
		v--, k--;
		cout << p[v][k] << endl;
	}
	return 0;
}
