#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LLONG_MAX >> 1;

int main() {
	int n, k;
	cin >> n >> k;
	vector<ll> x(n), y(n), sorted_x(n), sorted_y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		sorted_x[i] = x[i];
		sorted_y[i] = y[i];
	}
	sort(sorted_x.begin(), sorted_x.end());
	sort(sorted_y.begin(), sorted_y.end());
	sorted_x.erase(unique(sorted_x.begin(), sorted_x.end()), sorted_x.end());
	sorted_y.erase(unique(sorted_y.begin(), sorted_y.end()), sorted_y.end());
	ll answer = INF;
	for (int i1 = 0; i1 < int(sorted_x.size()); i1++) {
		for (int i2 = i1; i2 < int(sorted_x.size()); i2++) {
			for (int j1 = 0; j1 < int(sorted_y.size()); j1++) {
				for (int j2 = 0; j2 < int(sorted_y.size()); j2++) {
					int count = 0;
					for (int l = 0; l < n; l++) {
						if ((x[l] >= sorted_x[i1]) && (x[l] <= sorted_x[i2]) &&
							(y[l] >= sorted_y[j1]) && (y[l] <= sorted_y[j2])) {
							count++;
						}
					}
					if (count >= k) {
						answer = min(answer,
									 (sorted_x[i2] - sorted_x[i1]) * (sorted_y[j2] - sorted_y[j1]));
					}
				}
			}
		}
	}
	cout << answer << endl;
	return 0;
}
