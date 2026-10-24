#include <bits/stdc++.h>
using namespace std;

map<int, string> memo{{1, "1"}};

string dfs(int n) {
	if (memo.contains(n)) {
		return memo[n];
	}
	memo[n] = dfs(n - 1) + " " + to_string(n) + " " + dfs(n - 1);
	return memo[n];
}

int main(void) {
	int n;
	cin >> n;
	cout << dfs(n) << endl;
	return 0;
}
