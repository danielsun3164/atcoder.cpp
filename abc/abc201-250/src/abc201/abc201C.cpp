#include <bits/stdc++.h>
using namespace std;

const int N = 10;
const int M = 4;
const char MUST = 'o';
const char NG = 'x';

bool next(vector<int> &t) {
	int i = 0;
	while (true) {
		if (9 == t[i]) {
			t[i] = 0;
			i++;
			if (i >= M) {
				return false;
			}
		} else {
			t[i]++;
			return true;
		}
	}
}

bool ok(vector<int> &t, set<int> &must, set<int> &ng) {
	for (int musti : must) {
		if (t.end() == find(t.begin(), t.end(), musti)) {
			return false;
		}
	}
	for (int ti : t) {
		if (ng.end() != find(ng.begin(), ng.end(), ti)) {
			return false;
		}
	}
	return true;
}

int main(void) {
	string s;
	cin >> s;
	set<int> must, ng;
	for (int i = 0; i < N; i++) {
		if (MUST == s[i]) {
			must.insert(i);
		} else if (NG == s[i]) {
			ng.insert(i);
		}
	}
	vector<int> t(M, 0);
	int answer = 0;
	while (true) {
		if (ok(t, must, ng)) {
			answer++;
		}
		if (!next(t)) {
			break;
		}
	}
	cout << answer << endl;
	return 0;
}
