#include <iostream>
#include <atcoder/scc>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	atcoder::scc_graph g(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		g.add_edge(a, b);
	}
	auto scc = g.scc();
	cout << scc.size() << endl;
	for (auto v : scc) {
		cout << v.size();
		for (int e : v) {
			cout << " " << e;
		}
		cout << endl;
	}

	return 0;
}
