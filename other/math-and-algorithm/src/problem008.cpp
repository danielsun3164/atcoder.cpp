#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, s, answer = 0;
	cin >> n >> s;
	for (int i = 1; i <= min(n, s - 1); i++) {
		answer += min(n, s - i);
	}
	cout << answer << endl;
	return 0;
}
