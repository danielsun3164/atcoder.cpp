#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

void check(int sx, int sy, int tx, int ty) {
	Command cmd =
		execute(to_string(sx) + " " + to_string(sy) + " " + to_string(tx) + " " + to_string(ty));
	istringstream output_ss(cmd.StdOut);
	int x = sx, y = sy;
	string s;
	output_ss >> s;
	map<pair<int, int>, int> mp;
	for (int i = 0; i < int(s.size()); i++) {
		if ('U' == s[i]) {
			y++;
		} else if ('D' == s[i]) {
			y--;
		} else if ('L' == s[i]) {
			x--;
		} else {
			x++;
		}
		pair<int, int> key = {x, y};
		mp[key]++;
		if (!((x == sx) && (y == sy)) && !((x == tx) && (y == ty))) {
			EXPECT_EQ(1, mp[key]);
		}
	}
	EXPECT_EQ(sx, x);
	EXPECT_EQ(sy, y);
	EXPECT_EQ(2, mp[make_pair(sx, sy)]);
	EXPECT_EQ(2, mp[make_pair(tx, ty)]);
}

void my_check(string input, __attribute__((unused)) string expected) {
	istringstream input_ss(input);
	int sx, sy, tx, ty;
	input_ss >> sx >> sy >> tx >> ty;
	check(sx, sy, tx, ty);
}

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC051/C";
	FUNC = &my_check;
}

TEST(abc051_problemC, case1) {
	check(0, 0, 1, 2);
}

TEST(abc051_problemC, case2) {
	check(-2, -2, 1, 1);
}

TEST(abc051_problemC, case3) {
	check(0, 1, 0, 2);
}

TEST(abc051_problemC, case4) {
	check(0, 1, 1, 1);
}
