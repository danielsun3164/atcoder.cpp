#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string abc;
	cin >> abc;
	int sum = 0;
	for (int c : abc) {
		sum += c - '0';
	}
	cout << (sum * 111) << endl;
	return 0;
}
