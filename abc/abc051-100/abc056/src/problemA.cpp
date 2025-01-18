#include <bits/stdc++.h>
using namespace std;

const static char HONEST = 'H';
const static char DECEITFUL = 'D';

int main(void) {
	char a, b;
	cin >> a >> b;
	cout << ((a == b) ? HONEST : DECEITFUL) << endl;
	return 0;
}
