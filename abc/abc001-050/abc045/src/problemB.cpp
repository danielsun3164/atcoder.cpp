#include <bits/stdc++.h>
using namespace std;

const static int N = 3;
const static string ABC = "ABC";

int main(void) {
	vector<vector<int>> order(N);
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		for (char c : s) {
			order[i].emplace_back(c - 'a');
		}
	}
	vector<int> index(N, 0);
	int now = 0;
	while (index[now] < int(order[now].size())) {
		now = order[now][index[now]++];
	}
	cout << ABC[now] << endl;
	return 0;
}