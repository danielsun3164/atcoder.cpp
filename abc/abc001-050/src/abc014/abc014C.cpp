#include <bits/stdc++.h>
using namespace std;

const int N = 1'000'001;

int main(void) {
	vector<int> x(N + 1, 0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		x[a]++;
		x[b + 1]--;
	}
	for (int i = 0; i < N; i++) {
		x[i + 1] += x[i];
	}
	cout << *max_element(x.begin(), x.end()) << endl;
	return 0;
}
