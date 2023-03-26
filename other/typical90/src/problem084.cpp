#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static char MARU = 'o';

int main() {
	int n;
	string s;
	cin >> n >> s;
	vector<int> count(2, 0);
	int left = 0, right = -1;
	ll answer = 0LL;
	while (right < n) {
		while (((0 == count[0]) || (0 == count[1])) && (right < n)) {
			count[(MARU == s[++right]) ? 0 : 1]++;
		}
		if (right < n) {
			answer += n - right;
			while ((count[0] > 0) && (count[1] > 0)) {
				count[(MARU == s[left++]) ? 0 : 1]--;
				if ((count[0] > 0) && (count[1] > 0)) {
					answer += n - right;
				}
			}
		}
	}
	cout << answer << endl;
	return 0;
}
