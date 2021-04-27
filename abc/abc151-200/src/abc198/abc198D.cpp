#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int N = 26;
const int M = 10;

void add_vars(vector<char> &vars, string &s) {
	for (char c : s) {
		if (find(vars.begin(), vars.end(), c) == vars.end()) {
			vars.emplace_back(c);
		}
	}
}

ll process(string &s, vector<int> &dict) {
	ll res = 0LL;
	for (char c : s) {
		res = res * 10LL + dict[c - '0'];
	}
	return res;
}

bool solve(string &s1, string &s2, string &s3, vector<char> &vars, vector<int> &dict, vector<bool> &used,
		long unsigned int idx) {
	if (idx == vars.size()) {
		return process(s1, dict) + process(s2, dict) == process(s3, dict);
	}
	char c = vars[idx];
	for (int i = 0; i < M; i++) {
		if ((0 == i) && ((c == s1[0]) || (c == s2[0]) || (c == s3[0]))) {
			continue;
		}
		if (!used[i]) {
			used[i] = true;
			dict[c - '0'] = i;
			if (solve(s1, s2, s3, vars, dict, used, idx + 1)) {
				return true;
			}
			used[i] = false;
		}
	}
	return false;
}

int main(void) {
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	vector<char> vars;
	add_vars(vars, s1);
	add_vars(vars, s2);
	add_vars(vars, s3);
	if (vars.size() > M) {
		cout << "UNSOLVABLE" << endl;
		return 0;
	}
	vector<int> dict(N);
	vector<bool> used(M, false);
	if (solve(s1, s2, s3, vars, dict, used, 0)) {
		cout << process(s1, dict) << endl;
		cout << process(s2, dict) << endl;
		cout << process(s3, dict) << endl;
	} else {
		cout << "UNSOLVABLE" << endl;
	}
	return 0;
}
