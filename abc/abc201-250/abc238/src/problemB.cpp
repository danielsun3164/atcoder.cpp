#include <bits/stdc++.h>
using namespace std;

const static int N = 360;

int main(void) {
	int n;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int ai;
		cin >> ai;
		for (int &vi : a) {
			vi = (vi + ai) % N;
		}
		a.emplace_back(ai);
	}
	a.emplace_back(0);
	a.emplace_back(N);
	sort(a.begin(), a.end());
	int answer = 0;
	for (int i = 0; i < n + 1; i++) {
		answer = max(answer, a[i + 1] - a[i]);
	}
	cout << answer << endl;
	return 0;
}
