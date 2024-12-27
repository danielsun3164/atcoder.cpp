#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

const static int N = 3;

void check(vector<vector<int>> a) {
	string input = "";
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			input += ((j) ? " " : "") + to_string(a[i][j]);
		}
		input += "\n";
	}
	Command cmd = execute(input);
	istringstream output_ss(cmd.StdOut);
	string result;
	output_ss >> result;
	int x = 0, y = 0;
	for (char c : result) {
		EXPECT_TRUE(a[x][y] > 0);
		a[x][y]--;
		switch (c) {
			case 'L':
				EXPECT_TRUE(y > 0);
				y--;
				break;
			case 'R':
				EXPECT_TRUE(y < N - 1);
				y++;
				break;
			case 'U':
				EXPECT_TRUE(x > 0);
				x--;
				break;
			default:
				EXPECT_TRUE(x < N - 1);
				x++;
				break;
		}
	}
	EXPECT_EQ(0, x);
	EXPECT_EQ(0, y);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			EXPECT_EQ(0, a[i][j]);
		}
	}
}

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	string result;
	expected_ss >> result;
	if ("NO" == result) {
		check_from_file(input, expected);
	} else {
		istringstream input_ss(input);
		vector<vector<int>> a(N, vector<int>(N));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				input_ss >> a[i][j];
			}
		}
		check(a);
	}
}

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc227/H";
	FUNC = &my_check;
}

TEST(abc227_problemH, case1) {
	check(vector<vector<int>>{{1, 1, 1}, {1, 1, 1}, {1, 2, 1}});
}

TEST(abc227_problemH, case2) {
	check(string("") + "2 4 2\n" + "2 1 1\n" + "1 1 2", string("") + "NO");
}

TEST(abc227_problemH, case3) {
	check(vector<vector<int>>{{2, 2, 3}, {2, 1, 2}, {1, 3, 2}});
}
