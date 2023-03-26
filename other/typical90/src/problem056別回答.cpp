#include <bits/stdc++.h>
using namespace std;

bool calc(int n, int s, vector<int> &a, vector<int> &b, int now, int nowS, string &sb, map<int, bool> &memo) {
	if (now == n) {
		return (0 == nowS);
	}
	int key = now * (s + 1) + nowS;
	if (memo.end() != memo.find(key)) {
		return memo[key];
	}
	if (nowS >= a[now]) {
		sb.push_back('A');
		if (calc(n, s, a, b, now + 1, nowS - a[now], sb, memo)) {
			return true;
		}
		sb.pop_back();
	}
	if (nowS >= b[now]) {
		sb.push_back('B');
		if (calc(n, s, a, b, now + 1, nowS - b[now], sb, memo)) {
			return true;
		}
		sb.pop_back();
	}
	memo[key] = false;
	return false;
}

int main() {
	int n, s;
	cin >> n >> s;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	string sb;
	map<int, bool> memo;
	cout << (calc(n, s, a, b, 0, s, sb, memo) ? sb : "Impossible") << endl;
	return 0;
}
