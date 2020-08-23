#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	string s = "";
	for (int i = 0; i < A; i++) {
		s += "]";
	}
	cout << "A:" << s << endl;
	s = "";
	for (int i = 0; i < B; i++) {
		s += "]";
	}
	cout << "B:" << s << endl;
}
