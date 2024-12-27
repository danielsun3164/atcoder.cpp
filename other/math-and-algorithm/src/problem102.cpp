#include <bits/stdc++.h>
using namespace std;

const static int N = 3;
const static map<char, int> DICTIONARY{{'B', 0}, {'W', 1}, {'R', 2}};
const static string BWR = "BWR";

int combination(int n, int r) {
	if ((n < N) && (r < N)) {
		if (n < r) {
			return 0;
		}
		return ((2 == n) && (1 == r)) ? 2 : 1;
	}
	return combination(n / 3, r / 3) * combination(n % 3, r % 3);
}

int main() {
	int n;
	string c;
	cin >> n >> c;
	int answer = 0;
	for (int i = 0; i < n; i++) {
		answer = (answer + DICTIONARY.at(c[i]) * combination(n - 1, i)) % N;
	}
	answer = (1 & n) ? answer : (N - answer) % N;
	cout << BWR[answer] << endl;
	return 0;
}
