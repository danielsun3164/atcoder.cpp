#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

const int D = 130;

vector<int> a;
vector<vector<int>> edges;
vector<bool> used;
mint answer;

int gcd(int a, int b) {
	return (0 == b) ? a : gcd(b, a % b);
}

vector<tuple<int, int, mint>> dfs(int now) {
	used[now] = true;
	vector<tuple<int, int, mint>> list1;
	vector<int> indexes(D, 0);
	list1.push_back({a[now], 1, 1});
	for (int next : edges[now]) {
		if (!used[next]) {
			vector<tuple<int, int, mint>> list2 = dfs(next);
			int size1 = list1.size(), size2 = list2.size(), default_size = size1;
			for (int i = 0; i < size2; i++) {
				indexes[i] = -1;
				for (int j = 0; j < size1; j++) {
					if (j < default_size) {
						int g = gcd(get<0>(list1[j]), get<0>(list2[i]));
						if (0 == j) {
							get<0>(list2[i]) = g;
						}
						mint x = get<2>(list1[j]) * get<1>(list2[i]),
							 y = get<2>(list2[i]) * get<1>(list1[j]);
						answer += (x + y) * g;
					}
					if (get<0>(list1[j]) == get<0>(list2[i])) {
						indexes[i] = j;
					}
				}
				if (-1 == indexes[i]) {
					indexes[i] = size1;
					list1.push_back({get<0>(list2[i]), 0, 0});
					size1++;
				}
			}
			for (int i = 0; i < size2; i++) {
				get<1>(list1[indexes[i]]) += get<1>(list2[i]);
				get<2>(list1[indexes[i]]) += get<1>(list2[i]) + get<2>(list2[i]);
			}
		}
	}
	return list1;
}

int main(void) {
	int n;
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	edges.resize(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	answer = 0;
	used.resize(n, false);
	dfs(0);
	cout << answer.val() << endl;
	return 0;
}
