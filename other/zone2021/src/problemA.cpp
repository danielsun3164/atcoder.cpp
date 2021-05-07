#include <bits/stdc++.h>
using namespace std;

const string ZONE = "ZONe";

int main() {
	string s;
	cin >> s;
	string::size_type pos = s.find(ZONE);
	int count = 0;
	while (pos != string::npos) {
		count++;
		pos = s.find(ZONE, pos + 1);
	}
	cout << count << endl;
	return 0;
}
