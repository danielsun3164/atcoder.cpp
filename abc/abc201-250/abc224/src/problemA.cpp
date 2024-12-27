#include <bits/stdc++.h>
using namespace std;

const static string ER = "er";
const static string IST = "ist";

int main(void) {
	string s;
	cin >> s;
	cout << (s.ends_with(ER) ? ER : IST) << endl;
	return 0;
}
