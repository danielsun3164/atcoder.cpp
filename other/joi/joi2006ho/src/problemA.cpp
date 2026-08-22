#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	map<int, int> map;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= m; j++) {
			int b;
			cin >> b;
			map[j] += b;
		}
	}
	// マップを配列へ変換
	vector<pair<int, int>> v{std::make_move_iterator(begin(map)),
							 std::make_move_iterator(end(map))};
	// 配列に対してソートを実施
	sort(begin(v), end(v), [](auto p1, auto p2) {
		if (p1.second == p2.second) {
			return p1.first < p2.first;
		} else {
			return p1.second > p2.second;
		}
	});
	for (int i = 0; i < int(v.size()); i++) {
		if (i) {
			cout << " ";
		}
		cout << v[i].first;
	}
	cout << endl;
	return 0;
}
