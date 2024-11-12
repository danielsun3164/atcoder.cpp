#include <bits/stdc++.h>
using namespace std;

const static int N = 100'000;

int main(void) {
	int n;
	cin >> n;
	vector<int> count(N + 1, 0);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		count[a]++;
	}
	vector<int> count2(N + 1, 0);
	for (int i = 0; i < N; i++) {
		count2[count[i]]++;
	}
	int answer = n;
	for (int i = n; i > 2; i--) {
		if (1 & i) {
			answer -= (i - 1) * count2[i];
			count2[1] += count2[i];
		} else {
			answer -= (i - 2) * count2[i];
			count2[2] += count2[i];
		}
	}
	answer -= (1 & count2[2]) ? (count2[2] + 1) : count2[2];
	cout << answer << endl;
	return 0;
}
