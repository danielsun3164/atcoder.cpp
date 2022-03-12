#include <bits/stdc++.h>
using namespace std;

const int N = 3;

vector<vector<int>> b(N - 1, vector<int>(N)), c(N, vector<int>(N - 1));
map<int, pair<int, int>> m;

int convert(vector<int> &a) {
	int status = 0, pow = 1;
	for (int ai : a) {
		status += ai * pow;
		pow *= N;
	}
	return status;
}

pair<int, int> calc(vector<int> &a) {
	pair<int, int> p;
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N; j++) {
			if (a[i * N + j] == a[(i + 1) * N + j]) {
				p.first += b[i][j];
			} else {
				p.second += b[i][j];
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (a[i * N + j] == a[i * N + j + 1]) {
				p.first += c[i][j];
			} else {
				p.second += c[i][j];
			}
		}
	}
	return p;
}

pair<int, int> dfs(vector<int> &a, int cnt) {
	if (cnt >= N * N) {
		return calc(a);
	}
	int status = convert(a);
	if (m.end() != m.find(status)) {
		return m[status];
	}
	int next = 2 - (cnt & 1);
	int now = (1 == next) ? INT_MAX : -INT_MAX;
	pair<int, int> result;
	for (int i = 0; i < N * N; i++) {
		if (0 == a[i]) {
			a[i] = next;
			pair<int, int> p = dfs(a, cnt + 1);
			int diff = p.first - p.second;
			if (1 == next) {
				if (diff < now) {
					now = diff;
					result = p;
				}
			} else {
				if (diff > now) {
					now = diff;
					result = p;
				}
			}
			a[i] = 0;
		}
	}
	m[status] = result;
	return result;
}

int main(void) {
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N; j++) {
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			cin >> c[i][j];
		}
	}
	vector<int> a(N * N, 0);
	pair<int, int> ans = dfs(a, 0);
	cout << ans.first << endl;
	cout << ans.second << endl;
	return 0;
}
