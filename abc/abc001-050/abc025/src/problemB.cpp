#include <bits/stdc++.h>
using namespace std;

const string EAST = "East";
const string WEST = "West";

int main(void) {
	int n, a, b;
	cin >> n >> a >> b;
	int now = 0;
	for (int i = 0; i < n; i++) {
		string s;
		int d;
		cin >> s >> d;
		int act = (d < a) ? a : ((d > b) ? b : d);
		now += (EAST == s) ? act : -act;
	}
	cout << ((now < 0) ? WEST + " " : (now > 0) ? EAST + " " : "") << abs(now) << endl;
	return 0;
}
