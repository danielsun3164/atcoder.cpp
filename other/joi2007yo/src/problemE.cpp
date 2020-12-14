#include <bits/stdc++.h>
using namespace std;

const int NG = 0;
const int OK = 1;
const int UNKNOWN = 2;
const int N = 3;

void ok(int a, vector<int> &status, vector<vector<int>> &v1, vector<vector<int>> &v2) {
	if (OK != status[a]) {
		status[a] = OK;
		for (int index : v1[a]) {
			v2[index].erase(find(v2[index].begin(), v2[index].end(), a));
			if (1 == v2[index].size()) {
				status[v2[index][0]] = NG;
			}
		}
	}
}

int main() {
	int a, b, c, n, index = 0;
	cin >> a >> b >> c >> n;
	vector<int> status(a + b + c, UNKNOWN);
	// 決まらない部品の一覧
	vector<vector<int>> v1(a + b + c), v2;
	for (int i = 0; i < n; i++) {
		vector<int> vv(N);
		for (int i = 0; i < N; i++) {
			cin >> vv[i];
			vv[i]--;
		}
		int r;
		cin >> r;
		if (OK == r) {
			for (int vvi : vv) {
				ok(vvi, status, v1, v2);
			}
		} else {
			vector<int> vv2;
			for (int vvi : vv) {
				if (OK != status[vvi]) {
					vv2.push_back(vvi);
				}
			}
			if (1 == vv2.size()) {
				status[vv2[0]] = NG;
			} else {
				v2.push_back(vv2);
				for (int vv2i : vv2) {
					v1[vv2i].push_back(index);
				}
				index++;
			}
		}
	}
	for (int si : status) {
		cout << si << endl;
	}
	return 0;
}
