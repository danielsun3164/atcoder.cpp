#include <vector>
#include "grader.h"
#include "salt.h"

using namespace std;

void delete_node(vector<vector<int> > &e, int x, vector<bool> &deleted) {
	for (int i : e[x]) {
		for (auto itr = e[i].begin(); itr < e[i].end(); itr++) {
			if (*itr == x) {
				e[i].erase(itr);
				break;
			}
		}
	}
	deleted[x] = true;
}

void delete_edge(vector<vector<int> > &e, int x, int y) {
	// 辺を削除する
	for (auto itr = e[x].begin(); itr < e[x].end(); itr++) {
		if (*itr == y) {
			e[x].erase(itr);
			return;
		}
	}
}

void play(int N, int E[][2]) {
	vector<vector<int>> e(N + 1);
	int n = N, m = N - 1;
	for (int i = 0; i < N - 1; i++) {
		e[E[i][0]].emplace_back(E[i][1]);
		e[E[i][1]].emplace_back(E[i][0]);
	}
	vector<bool> deleted(N + 1, false);
	while (true) {
		int x = 0, y = 0;
		if ((1 & n) && (1 & m)) {
			// 頂点数と辺数がともに奇数の場合
			for (int i = 1; i <= N; i++) {
				if (!deleted[i]) {
					if (1 == e[i].size()) {
						x = i;
						y = i;
						break;
					}
				}
			}
		} else if (!(1 & n) && (1 & m)) {
			// 頂点数が偶数、辺数が奇数の場合
			for (int i = 1; i <= N; i++) {
				if (!deleted[i]) {
					if (e[i].size() > 0) {
						x = i;
						y = e[i][0];
						if (x > y) {
							swap(x, y); // @suppress("Invalid arguments")
						}
						break;
					}
				}
			}
		} else if ((1 & n) && !(1 & m)) {
			// 頂点数が奇数、辺数が偶数の場合
			for (int i = 1; i <= N; i++) {
				if (!deleted[i]) {
					if (!(1 & e[i].size())) {
						x = i;
						y = i;
						break;
					}
				}
			}
		}

		if (x == y) {
			// 頂点を削除する場合、関連する辺をすべて削除する
			delete_node(e, x, deleted);
			m -= e[x].size();
			e[x].clear();
			n--;
		} else {
			// 辺を削除する
			delete_edge(e, x, y);
			delete_edge(e, y, x);
			m--;
		}

		int ru, rv;
		turn(x, y, &ru, &rv);
		if (0 == ru) {
			break;
		}
		if (ru == rv) {
			delete_node(e, ru, deleted);
			m -= e[ru].size();
			e[ru].clear();
			n--;
		} else {
			delete_edge(e, ru, rv);
			delete_edge(e, rv, ru);
			m--;
		}
	}
}
