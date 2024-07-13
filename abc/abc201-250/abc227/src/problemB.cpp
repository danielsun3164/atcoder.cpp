#include <bits/stdc++.h>
using namespace std;

bool check(int s) {
	for (int a = 1; a * 7 <= s - 3; a++) {
		int x = 4 * a + 3, y = s - 3 * a;
		if (0 == y % x) {
			return true;
		}
	}
	return false;
}

int main(void) {
	int n, answer = 0;
	cin >> n;
	while (n--) {
		int s;
		cin >> s;
		if (!check(s)) {
			answer++;
		}
	}
	cout << answer << endl;
	return 0;
}
