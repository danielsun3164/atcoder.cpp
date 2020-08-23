#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, A;
	cin >> N >> A;

	for (int i = 1; i <= N; i++) {
		string op;
		cin >> op;
		int B;
		cin >> B;
		if ("+" == op) {
			A += B;
		} else if ("-" == op) {
			A -= B;
		} else if ("*" == op) {
			A *= B;
		} else if (("/" == op) && (0 != B)) {
			A /= B;
		} else {
			cout << "error" << endl;
			break;
		}
		cout << i << ":" << A << endl;
	}
}
