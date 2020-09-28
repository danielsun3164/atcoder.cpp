#include <bits/stdc++.h>
using namespace std;

int fa(deque<int>, deque<int>, deque<int>);
int fc(deque<int>, deque<int>, deque<int>);

int pow(int n, int m) {
	int result = 1;
	while (m > 0) {
		if (1 == (m & 1)) {
			result *= n;
		}
		n *= n;
		m >>= 1;
	}
	return result;
}

int fa(deque<int> a_que, deque<int> b_que, deque<int> c_que) {
	if (b_que.empty() && c_que.empty()) {
		return 0;
	}
	int a_min = a_que.empty() ? INT_MAX : a_que.front();
	int b_min = b_que.empty() ? INT_MAX : b_que.front();
	int c_min = c_que.empty() ? INT_MAX : c_que.front();
	int result = 0;
	if ((a_min < b_min) && (a_min < c_min)) {
		int temp = a_que.front();
		a_que.pop_front();
		result = fa(a_que, b_que, c_que);
		a_que.push_front(temp);
	} else if ((b_min < c_min) && (b_min < c_min)) {
		int temp = b_que.front();
		b_que.pop_front();
		result = fc(a_que, b_que, c_que) + pow(3, a_que.size() + b_que.size() + c_que.size());
		b_que.push_front(temp);
	} else {
		int temp = c_que.front();
		c_que.pop_front();
		result = fa(a_que, b_que, c_que) + 2 * pow(3, a_que.size() + b_que.size() + c_que.size());
		c_que.push_front(temp);
	}
	return result;
}

int fc(deque<int> a_que, deque<int> b_que, deque<int> c_que) {
	if (a_que.empty() && b_que.empty()) {
		return 0;
	}
	int a_min = a_que.empty() ? INT_MAX : a_que.front();
	int b_min = b_que.empty() ? INT_MAX : b_que.front();
	int c_min = c_que.empty() ? INT_MAX : c_que.front();
	int result = 0;
	if ((a_min < b_min) && (a_min < c_min)) {
		int temp = a_que.front();
		a_que.pop_front();
		result = fc(a_que, b_que, c_que) + 2 * pow(3, a_que.size() + b_que.size() + c_que.size());
		a_que.push_front(temp);
	} else if ((b_min < c_min) && (b_min < c_min)) {
		int temp = b_que.front();
		b_que.pop_front();
		result = fa(a_que, b_que, c_que) + pow(3, a_que.size() + b_que.size() + c_que.size());
		b_que.push_front(temp);
	} else {
		int temp = c_que.front();
		c_que.pop_front();
		result = fc(a_que, b_que, c_que);
		c_que.push_front(temp);
	}
	return result;
}

int main() {
	int n, m;
	cin >> n >> m;
	deque<int> a_que, b_que, c_que;

	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int t;
		cin >> t;
		a_que.push_back(t);
	}
	int b;
	cin >> b;
	for (int i = 0; i < b; i++) {
		int t;
		cin >> t;
		b_que.push_back(t);
	}
	int c;
	cin >> c;
	for (int i = 0; i < c; i++) {
		int t;
		cin >> t;
		c_que.push_back(t);
	}
	int result = min(fa(a_que, b_que, c_que), fc(a_que, b_que, c_que));
	cout << ((result <= m) ? result : -1) << endl;
	return 0;
}
