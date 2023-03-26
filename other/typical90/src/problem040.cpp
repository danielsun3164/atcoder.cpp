#include <bits/stdc++.h>
#include <atcoder/maxflow>
using namespace std;

const static int INF = INT_MAX >> 1;

int main() {
	int n, w;
	cin >> n >> w;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	atcoder::mf_graph<int> graph(n + 2);
	for (int i = 0; i < n; i++) {
		int k, c;
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> c;
			graph.add_edge(c - 1, i, INF);
		}
	}
	for (int i = 0; i < n; i++) {
		graph.add_edge(n, i, a[i]);
		graph.add_edge(i, n + 1, w);
	}
	int answer = accumulate(a.begin(), a.end(), 0) - graph.flow(n, n + 1);
	cout << answer << endl;
	return 0;
}
