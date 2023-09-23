#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	ll n;
	cin >> n;
	string answer;
	while (n > 0) {
		if (1LL & n) {
			n--;
			answer.push_back('A');
		} else {
			n >>= 1;
			answer.push_back('B');
		}
	}
	reverse(answer.begin(), answer.end());
	cout << answer << endl;
	return 0;
}
