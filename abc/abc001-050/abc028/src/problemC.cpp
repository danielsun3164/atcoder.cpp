#include <bits/stdc++.h>
using namespace std;

const int N = 5;

int main(void) {
	vector<int> a(N), v;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				v.emplace_back(a[i] + a[j] + a[k]);
			}
		}
	}
	sort(v.begin(), v.end(), greater<int>());
	cout << v[2] << endl;
	return 0;
}
