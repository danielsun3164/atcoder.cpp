#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 4;

int main() {
	ll n;
	cin >> n;
	cout << ((n % N) ? "First" : "Second") << endl;
	return 0;
}
