#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static map<char, int> DIRECTION = { { 'U', 0 }, { 'D', 1 }, { 'L', 2 }, { 'R', 3 } };
const static vector<int> DX = { 0, 0, -1, 1 };
const static vector<int> DY = { 1, -1, 0, 0 };

void my_check(string input, __attribute__((unused))        string expected) {
	istringstream input_ss(input);
	int n, a, b;
	input_ss >> n >> a >> b;
	vector<int> d(n);
	for (int i = 0; i < n; i++) {
		input_ss >> d[i];
	}
	Command cmd = execute(input);
	istringstream expected_ss(expected);
	string expected_result;
	expected_ss >> expected_result;
	if ("No" == expected_result) {
		EXPECT_EQ(expected, cmd.StdOut);
	} else {
		string s;
		expected_ss >> s;
		EXPECT_EQ(n, s.size());
		int x = 0, y = 0;
		for (int i = 0; i < n; i++) {
			EXPECT_TRUE(DIRECTION.contains(s[i]));
			x += DX[DIRECTION[s[i]]] * d[i];
			y += DY[DIRECTION[s[i]]] * d[i];
		}
		EXPECT_EQ(a, x);
		EXPECT_EQ(b, y);
	}
}

static_block
{
	COMMAND = "problemG";
	EXTERNAL = "abc221/G";
	FUNC = &my_check;
}

TEST(abc221_problemG, case1) {
	my_check(string("") + "3 2 -2\n" + "1 2 3", string("") + "Yes\n" + "LDR");
}

TEST(abc221_problemG, case2) {
	check(string("") + "2 1 0\n" + "1 6", string("") + "No");
}

TEST(abc221_problemG, case3) {
	my_check(string("") + "5 6 7\n" + "1 3 5 7 9", string("") + "Yes\n" + "LRLUR");
}
