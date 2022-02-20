#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a, b, w;
	cin >> a >> b >> w;
	w *= 1000;
	int ca = w / a, cb = (w + b - 1) / b;
	if (cb <= ca) {
		cout << cb << " " << ca << endl;
	} else {
		cout << "UNSATISFIABLE" << endl;
	}
	return 0;
}
