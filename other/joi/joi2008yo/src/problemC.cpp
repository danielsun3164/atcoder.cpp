#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	set<int> taro, hanako;
	for (int i = 1; i <= 2 * n; i++) {
		hanako.insert(i);
	}
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		taro.insert(a);
		hanako.erase(hanako.find(a));
	}
	set<int> *now = &taro;
	int pre = 0;
	while (!taro.empty() && !hanako.empty()) {
		auto itr = now->upper_bound(pre);
		if (itr != now->end()) {
			pre = *itr;
			now->erase(itr);
		} else {
			pre = 0;
		}
		if (now == &taro) {
			now = &hanako;
		} else {
			now = &taro;
		}
	}
	cout << hanako.size() << endl;
	cout << taro.size() << endl;
	return 0;
}
