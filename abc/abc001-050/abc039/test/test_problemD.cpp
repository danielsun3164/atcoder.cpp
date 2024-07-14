#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

const static char BLACK = '#';
const static char WHITE = '.';
const static vector<int> XS{1, 1, 1, 0, 0, -1, -1, -1};
const static vector<int> YS{-1, 0, 1, -1, 1, -1, 0, 1};

vector<string> convert(vector<string> &t) {
	int h = t.size(), w = t[0].size();
	vector<string> v(h, string(w, WHITE));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			int black_count = 0, white_count = 0;
			for (int k = 0; k < int(XS.size()); k++) {
				int nx = i + XS[k], ny = j + YS[k];
				if ((nx >= 0) && (nx < h) && (ny >= 0) && (ny < w)) {
					if (BLACK == t[nx][ny]) {
						black_count++;
					} else {
						white_count++;
					}
				}
			}
			v[i][j] = (0 == black_count) ? t[i][j] : BLACK;
		}
	}
	return v;
}

void check(int h, int w, vector<string> s) {
	string input = to_string(h) + " " + to_string(w);
	for (string si : s) {
		input += "\n" + si;
	}
	Command cmd = execute(input);
	istringstream input_ss(cmd.StdOut);
	string result;
	input_ss >> result;
	EXPECT_EQ("possible", result);
	vector<string> t(h);
	for (string &ti : t) {
		input_ss >> ti;
	}
	vector<string> ct = convert(t);
	EXPECT_EQ(s, ct);
}

TEST(abc039_problemD, case1) {
	check(4, 4, vector<string>{"##..", "##..", "..##", "..##"});
}

TEST(abc039_problemD, case2) {
	check(4, 4, vector<string>{"###.", "####", "..##", "..##"});
}

TEST(abc039_problemD, case3) {
	check(string("") + "4 4\n" + "###.\n" + "##.#\n" + "..##\n" + "..##",
		  string("") + "impossible");
}
