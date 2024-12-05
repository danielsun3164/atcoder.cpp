#include <bits/stdc++.h>
#include <atcoder/maxflow>
using namespace std;

bool is_palindrome(string &s) {
	int n = s.size(), start = 0, end = n - 1;
	while (end > start) {
		if (s[start++] != s[end--]) {
			return false;
		}
	}
	return true;
}

int main(void) {
	string s;
	cin >> s;
	set<string> st;
	{
		int n = s.size();
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				string t = s.substr(i, j - i + 1);
				if (is_palindrome(t)) {
					st.insert(t);
				}
			}
		}
	}
	vector<string> a(st.begin(), st.end());
	int n = st.size();
	int p = (n << 1), q = (n << 1) | 1;
	atcoder::mf_graph<int> g(q + 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (a[i].contains(a[j])) {
					g.add_edge(i, j + n, 1);
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		g.add_edge(p, i, 1);
		g.add_edge(i + n, q, 1);
	}
	cout << (n - g.flow(p, q)) << endl;
	return 0;
}
