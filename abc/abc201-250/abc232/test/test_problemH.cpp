#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

void check(int h, int w, int a, int b) {
	Command cmd =
		execute(to_string(h) + " " + to_string(w) + " " + to_string(a) + " " + to_string(b));
	int lineNo = 0;
	for (int i = 0; i < int(cmd.StdOut.size()); i++) {
		if ('\n' == cmd.StdOut[i]) {
			lineNo++;
		}
	}
	EXPECT_EQ(h * w, lineNo);
	istringstream output_ss(cmd.StdOut);
	int px = 0, py = 0;
	vector<vector<bool>> visited(h, vector<bool>(w, false));
	for (int i = 0; i < h * w; i++) {
		int x, y;
		output_ss >> x >> y;
		EXPECT_FALSE(visited[x - 1][y - 1]);
		visited[x - 1][y - 1] = true;
		if (0 == i) {
			EXPECT_EQ(1, x);
			EXPECT_EQ(1, y);
		} else {
			EXPECT_TRUE(abs(x - px) <= 1);
			EXPECT_TRUE(abs(y - py) <= 1);
		}
		if (h * w - 1 == i) {
			EXPECT_EQ(a, x);
			EXPECT_EQ(b, y);
		}
		px = x;
		py = y;
	}
}

void my_check(string input, __attribute__((unused)) string expected) {
	istringstream input_ss(input);
	int h, w, a, b;
	input_ss >> h >> w >> a >> b;
	check(h, w, a, b);
}

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc232/H";
	FUNC = &my_check;
}

TEST(abc232_problemH, case1) {
	check(3, 2, 3, 2);
}
