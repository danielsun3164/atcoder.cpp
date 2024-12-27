#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

void dfs(vector<int> &p, vector<vector<pair<int, int>>> &edges, vector<int> &ax,
		 vector<int> &result, int x, int now, int prev) {
	if (p[now] == x) {
		ax = result;
		return;
	}
	for (auto [next, idx] : edges[now]) {
		if (next != prev) {
			result.emplace_back(idx);
			dfs(p, edges, ax, result, x, next, now);
			result.pop_back();
		}
	}
}

void push(vector<int> &p, vector<pair<int, int>> &ab, vector<int> &answer, int num) {
	answer.emplace_back(num);
	swap(p[ab[num].first], p[ab[num].second]);
}

int main(void) {
	int n;
	cin >> n;
	vector<int> p(n);
	for (int &pi : p) {
		cin >> pi;
		pi--;
	}
	int m;
	cin >> m;
	vector<vector<pair<int, int>>> edges(n);
	vector<pair<int, int>> ab;
	atcoder::dsu d(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		ab.push_back({a, b});
		if (!d.same(a, b)) {
			d.merge(a, b);
			edges[a].push_back({b, i});
			edges[b].push_back({a, i});
		}
	}
	vector<int> jun;
	vector<bool> used(n, false);
	for (int i = 0; i < n; i++) {
		if (!used[i]) {
			used[i] = true;
			queue<int> que;
			que.push(i);
			while (!que.empty()) {
				int now = que.front();
				que.pop();
				jun.emplace_back(now);
				for (auto [next, idx] : edges[now]) {
					if (!used[next]) {
						used[next] = true;
						que.push(next);
					}
				}
			}
		}
	}
	reverse(jun.begin(), jun.end());
	vector<int> answer;
	for (int x : jun) {
		if (x == p[x]) {
			continue;
		}
		vector<int> ax, result;
		dfs(p, edges, ax, result, x, x, -1);
		if (ax.empty()) {
			cout << -1 << endl;
			return 0;
		}
		reverse(ax.begin(), ax.end());
		for (int axi : ax) {
			push(p, ab, answer, axi);
		}
	}
	int s = answer.size();
	cout << s << endl;
	for (int i = 0; i < s; i++) {
		cout << (i ? " " : "") << (answer[i] + 1);
	}
	cout << endl;
	return 0;
}
