#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int h = n / 60 / 60, m = n / 60 % 60, s = n % 60;
	cout << setfill('0') << setw(2) << right << h << ":" << setfill('0') << setw(2) << right << m << ":" << setfill('0')
			<< setw(2) << right << s << endl;
	return 0;
}
