#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(ll n, ll b, ll &answer, int pos, int last, string str) {
	if (0 == pos) {
		ll rem = 1LL;
		for (char c : str) {
			rem *= c - '0';
		}
		ll goal = rem + b;
		if (goal <= n) {
			string goal_str = to_string(goal);
			sort(goal_str.begin(), goal_str.end());
			reverse(goal_str.begin(), goal_str.end());
			if (goal_str == str) {
				answer++;
			}
		}
		return;
	}
	for (int i = last; i >= 1; i--) {
		string str2 = str;
		str2 += i + '0';
		dfs(n, b, answer, pos - 1, i, str2);
	}
}

int main() {
	ll n, b, answer = 0;
	cin >> n >> b;
	for (int i = 1; i <= 11; i++) {
		dfs(n, b, answer, i, 9, "");
	}
	string b_str = to_string(b);
	if (b_str.contains('0') && (n >= b)) {
		answer++;
	}
	cout << answer << endl;
	return 0;
}
