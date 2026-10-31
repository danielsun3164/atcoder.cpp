#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> x, y;

bool colinear(int a, int b, int c) {
	ll val1 = (y[b] - y[a]) * (x[c] - x[a]), val2 = (x[b] - x[a]) * (y[c] - y[a]);
	return val1 == val2;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	x.resize(n);
	y.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	if (1 == k) {
		cout << "Infinity" << endl;
		return 0;
	}
	vector<vector<bool>> flag(n, vector<bool>(n, true));
	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (flag[i][j]) {
				vector<int> list;
				list.emplace_back(i);
				list.emplace_back(j);
				for (int l = j + 1; l < n; l++) {
					if (colinear(i, j, l)) {
						list.emplace_back(l);
					}
				}
				int count = list.size();
				for (int l = 0; l < count; l++) {
					for (int m = l + 1; m < count; m++) {
						flag[list[l]][list[m]] = false;
					}
				}
				if (count >= k) {
					answer++;
				}
			}
		}
	}
	cout << answer << endl;
	return 0;
}
