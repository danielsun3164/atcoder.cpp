#include <bits/stdc++.h>
using namespace std;

/** Merge insertion sort用 */
const vector<int> T = {0, 2, 4, 10};

bool comp(char c1, char c2) {
	cout << "? " << c1 << " " << c2 << endl;
	char result;
	cin >> result;
	return ('<' == result);
}

void merge_sort(string &s, int start, int end) {
	if ((end - start) <= 1) {
		return;
	}
	string t = s;
	int med = start + (end - start) / 2;
	merge_sort(t, start, med);
	merge_sort(t, med, end);
	int i = start, i1 = start, i2 = med;
	while (i < end) {
		if ((i1 < med) && (i2 < end)) {
			if (comp(t[i1], t[i2])) {
				s[i++] = t[i1++];
			} else {
				s[i++] = t[i2++];
			}
		} else if (i2 == end) {
			s[i++] = t[i1++];
		} else {
			s[i++] = t[i2++];
		}
	}
}

void insert(string &s, char c, int start, int end) {
	if (start == end) {
		s.insert(s.begin() + start, c);
		return;
	}
	int med = (start + end) / 2;
	if (comp(s[med], c)) {
		insert(s, c, med + 1, end);
	} else {
		insert(s, c, start, med);
	}
}

string merge_insertion_sort(string &s) {
	int n = int(s.size());
	if (1 == n) {
		return s;
	}
	for (int i = 0; i < n / 2; i++) {
		if (!comp(s[2 * i], s[2 * i + 1])) {
			swap(s[2 * i], s[2 * i + 1]);
		}
	}
	string t;
	for (int i = 0; i < n / 2; i++) {
		t.push_back(s[2 * i + 1]);
	}
	t = merge_insertion_sort(t);
	string r = t;
	for (int i = 0; i < int(T.size()); i++) {
		int start = (0 == i) ? -1 : T[i - 1];
		if (start >= int(s.size())) {
			break;
		}
		for (int j = T[i]; j > start; j--) {
			if (j < int(t.size())) {
				insert(r, *(find(s.begin(), s.end(), t[j]) - 1), 0,
					   find(r.begin(), r.end(), t[i]) - r.begin());
			} else if ((2 * j + 1) == int(s.size())) {
				insert(r, s[2 * j], 0, r.size());
			} else {
				break;
			}
		}
	}
	return r;
}

int main() {
	int n, q;
	cin >> n >> q;
	string s;
	for (int i = 0; i < n; i++) {
		s.push_back('A' + i);
	}
	if (26 == n) {
		merge_sort(s, 0, 26);
	} else {
		s = merge_insertion_sort(s);
	}
	cout << "! " << s << endl;
	return 0;
}
