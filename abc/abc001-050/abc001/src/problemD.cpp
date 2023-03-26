#include <bits/stdc++.h>
using namespace std;

const int N = 289;

int floor(string &s) {
	int hour = stoi(s.substr(0, 2));
	int minute = stoi(s.substr(2, 2)) / 5;
	return hour * 12 + minute;
}

int ceil(string &s) {
	int hour = stoi(s.substr(5, 2));
	int minute = stoi(s.substr(7, 2));
	int new_minute = (0 == minute) ? 0 : (minute - 1) / 5 + 1;
	return hour * 12 + new_minute;
}

string to_time(int number) {
	char s[14];
	int hour = number / 12;
	int minute = number % 12 * 5;
	snprintf(s, 14, "%02d%02d", hour, minute);
	return string(s);
}

void output(vector<bool> &moment) {
	bool find_start = true;
	int start = 0;
	for (int i = 0; i < N; i++) {
		if (find_start && moment[i]) {
			find_start = false;
			start = i;
		} else if (!find_start && !moment[i]) {
			find_start = true;
			cout << to_time(start) << "-" << to_time(i) << endl;
		}
	}
}

int main(void) {
	int n;
	cin >> n;
	vector<bool> moment(N, false);

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = floor(s); j < ceil(s); j++) {
			moment[j] = true;
		}
	}
	output(moment);
	return 0;
}
