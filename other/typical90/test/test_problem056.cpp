#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

void my_check(string input, __attribute__((unused))  string expected) {
	istringstream expected_ss(expected);
	string result;
	expected_ss >> result;
	if ("Impossible" == result) {
		check_from_file(input, expected);
	} else {
		istringstream input_ss(input);
		int n, s;
		input_ss >> n >> s;
		vector<vector<int>> ab(n, vector<int>(2));
		for (int i = 0; i < n; i++) {
			input_ss >> ab[i][0] >> ab[i][1];
		}
		Command cmd = execute(input);
		istringstream output_ss(cmd.StdOut);
		string output;
		output_ss >> output;
		EXPECT_EQ(n, output.size());
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += ab[i][output[i] - 'A'];
		}
		EXPECT_EQ(s, sum);
	}
}

static_block
{
	COMMAND = "problem056";
	EXTERNAL = "typical90/056";
	FUNC = &my_check;
}

TEST(typical90_problem056, case1) {
	check(string("") + "3 34\n" + "3 14\n" + "15 9\n" + "26 5", string("") + "BAB");
}

TEST(typical90_problem056, case2) {
	check(string("") + "5 77\n" + "1 16\n" + "3 91\n" + "43 9\n" + "4 26\n" + "23 11", string("") + "BABBA",
			string("") + "BAAAB");
}

TEST(typical90_problem056, case3) {
	check(string("") + "5 59\n" + "8 13\n" + "55 5\n" + "58 8\n" + "23 14\n" + "4 61", string("") + "Impossible");
}
