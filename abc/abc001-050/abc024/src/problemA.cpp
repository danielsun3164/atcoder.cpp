#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, c, k, s, t;
	cin >> a >> b >> c >> k >> s >> t;
	cout << s * a + t * b - ((s + t >= k) ? (s + t) * c : 0) << endl;
	return 0;
}
