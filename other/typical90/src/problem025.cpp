#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(ll n, ll b, ll &answer, int pos, int last, string str) {
	if (0 == pos) {
		ll rem = 1LL;
		for (int i = 0; i < int(str.size()); i++) {
			rem *= str[i] - '0';
		}
		ll goal = rem + b;
		if (goal <= n) {
			string goal_str = to_string(goal);
			sort(goal_str.begin(), goal_str.end(), greater<>());
			if (str == goal_str) {
				answer++;
			}
		}
		return;
	}
	for (int i = last; i >= 1; i--) {
		string str2 = str;
		str2 += ('0' + i);
		dfs(n, b, answer, pos - 1, i, str2);
	}
}

int main() {
	ll n, b;
	cin >> n >> b;
	ll answer = 0;
	for (int i = 1; i <= 11; i++) {
		dfs(n, b, answer, i, 9, "");
	}
	string v = to_string(b);
	bool flag = false;
	for (int i = 0; i < int(v.size()); i++) {
		if ('0' == v[i]) {
			flag = true;
		}
	}
	if (flag && (n >= b)) {
		answer++;
	}
	cout << answer << endl;
	return 0;
}
