#include <bits/stdc++.h>
#include <atcoder/string>
using namespace std;

const static vector<char> COLORS = {'R', 'G', 'B'};
const static int N = 3;

string replace(string s, char a, char b) {
	string r = s;
	for (int i = 0; i < int(r.size()); i++) {
		if (a == r[i]) {
			r[i] = b;
		} else if (b == r[i]) {
			r[i] = a;
		}
	}
	return r;
}

int main() {
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	vector<string> t2(N);
	for (int i = 0; i < N; i++) {
		t2[i] = replace(t, COLORS[i], COLORS[(i + 1) % N]);
	}
	int answer = 0;
	for (int i = 0; i < N; i++) {
		string st = s + t2[i], ts = t2[i] + s;
		vector<int> zst = atcoder::z_algorithm(st), zts = atcoder::z_algorithm(ts);
		for (int k = -(n - 1); k < n; k++) {
			if (((k < 0) && (n + k == zts[n - k])) || ((k >= 0) && (n - k == zst[n + k]))) {
				answer++;
			}
		}
	}
	cout << answer << endl;
	return 0;
}
