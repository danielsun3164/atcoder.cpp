#include <bits/stdc++.h>
using namespace std;

const static vector<int> BILLS = {10'000, 5'000, 1'000};

int main() {
	int n;
	cin >> n;
	int answer = 0;
	for (int b : BILLS) {
		answer += n / b;
		n %= b;
	}
	cout << answer << endl;
	return 0;
}
