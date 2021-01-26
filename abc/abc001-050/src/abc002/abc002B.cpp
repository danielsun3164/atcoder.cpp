#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string w;
	cin >> w;
	cout << regex_replace(w, regex("[aeiou]"), "") << endl;
	return 0;
}
