#include <bits/stdc++.h>
using namespace std;

const static int INF = INT_MAX >> 1;

template <class T>
struct my_data {
   public:
	my_data() {}

	void add(T value) {
		if (s.empty()) {
			s.insert(value);
		} else if (value < *s.rbegin()) {
			s.insert(value);
		} else {
			t.insert(value);
		}
		refresh();
	}

	void remove(T value) {
		if (s.end() != s.find(value)) {
			s.erase(s.find(value));
		} else if (t.end() != t.find(value)) {
			t.erase(t.find(value));
		}
		refresh();
	}

	T get_middle() {
		refresh();
		if (s.size() > t.size()) {
			return *s.rbegin();
		} else {
			return (*s.rbegin() + *t.begin()) >> 1;
		}
	}

   private:
	multiset<T> s, t;

	void refresh() {
		while (s.size() > t.size() + 1) {
			t.insert(*s.rbegin());
			s.erase(s.find(*s.rbegin()));
		}
		while (t.size() > s.size()) {
			s.insert(*t.begin());
			t.erase(t.begin());
		}
	}
};

int calc(vector<int> &a, vector<vector<int>> &edges, vector<bool> &used, my_data<int> &dt, int now,
		 bool use_max) {
	bool has_next = false;
	for (int next : edges[now]) {
		if (!used[next]) {
			has_next = true;
			break;
		}
	}
	if (has_next) {
		int result = use_max ? -INF : INF;
		for (int next : edges[now]) {
			if (!used[next]) {
				used[next] = true;
				dt.add(a[next]);
				int next_result = calc(a, edges, used, dt, next, !use_max);
				result = (use_max) ? max(result, next_result) : min(result, next_result);
				dt.remove(a[next]);
				used[next] = false;
			}
		}
		return result;
	}
	return dt.get_middle();
}

int main(void) {
	//	my_data<int> d;
	//	d.add(2);
	//	d.add(2);
	//	d.add(4);
	//	cout << d.get_middle() << endl;
	//	d.add(4);
	//	cout << d.get_middle() << endl;
	//	d.add(6);
	//	cout << d.get_middle() << endl;
	//
	//	return 0;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		edges[u].emplace_back(v);
		edges[v].emplace_back(u);
	}
	vector<bool> used(n, false);
	used[0] = true;
	my_data<int> dt;
	dt.add(a[0]);
	cout << calc(a, edges, used, dt, 0, true) << endl;
	return 0;
}
