#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

const static char SHEEP = 'S';
const static char WOLF = 'W';
const static char SAME = 'o';

char another(char animal) {
	return (SHEEP == animal) ? WOLF : SHEEP;
}

void check(int n, string s) {
	string input = to_string(n) + "\n";
	input += s + "\n";
	Command cmd = execute(input);
	istringstream output_ss(cmd.StdOut);
	string answer;
	output_ss >> answer;
	EXPECT_EQ(n, answer.size());
	for (int i = 0; i < n; i++) {
		if (((SAME == s[(i + 1) % n]) && (SHEEP == answer[(i + 1) % n])) ||
			((SAME != s[(i + 1) % n]) && (WOLF == answer[(i + 1) % n]))) {
			EXPECT_EQ(answer[i], answer[(i + 2) % n]);
		} else {
			EXPECT_NE(answer[i], answer[(i + 2) % n]);
		}
	}
}

void my_check(string input, string expected) {
	if (expected.starts_with("-1")) {
		check(input, "-1");
	} else {
		istringstream input_ss(input);
		int n;
		string s;
		input_ss >> n;
		input_ss >> s;
	}
}

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC069/D";
	FUNC = &my_check;
}

TEST(abc055_problemD, case1) {
	check(string("") + "6\n" + "ooxoox", string("") + "SSSWWS");
}

TEST(abc055_problemD, case2) {
	check(string("") + "3\n" + "oox", string("") + "-1");
}

TEST(abc055_problemD, case3) {
	check(string("") + "10\n" + "oxooxoxoox", string("") + "SSWWSSSWWS");
}
