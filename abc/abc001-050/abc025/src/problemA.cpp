#include <bits/stdc++.h>
using namespace std;

const int N = 5;

int main(void) {
	string s;
	int n;
	cin >> s >> n;
	n--;
	cout << s[n / N] << s[n % N] << endl;
	return 0;
}
