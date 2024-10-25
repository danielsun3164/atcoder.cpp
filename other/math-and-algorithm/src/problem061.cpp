#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 60;

int main() {
	ll n;
	cin >> n;
	cout << ((1 == __builtin_popcountll(n + 1)) ? "Second" : "First") << endl;
	return 0;
}
