#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, answer = 0;
	cin >> n >> x;
	for (int a = 1; a <= n - 2; a++) {
		for (int b = a + 1; b <= n - 1; b++) {
			int c = x - a - b;
			if ((c > b) && (c <= n)) {
				answer++;
			}
		}
	}
	cout << answer << endl;
	return 0;
}
