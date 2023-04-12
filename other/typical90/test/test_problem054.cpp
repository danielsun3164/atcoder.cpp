#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problem054";
	EXTERNAL = "typical90/054";
}

TEST(typical90_problem054, case1) {
	check(string("") + "6 3\n" + "3\n" + "1 2 3\n" + "2\n" + "3 4\n" + "2\n" + "5 6",
			string("") + "0\n" + "1\n" + "1\n" + "2\n" + "-1\n" + "-1");
}

TEST(typical90_problem054, case2) {
	check(string("") + "4 3\n" + "2\n" + "1 2\n" + "2\n" + "2 3\n" + "2\n" + "3 4",
			string("") + "0\n" + "1\n" + "2\n" + "3");
}

TEST(typical90_problem054, case3) {
	check(string("") + "4 1\n" + "3\n" + "2 3 4", string("") + "0\n" + "-1\n" + "-1\n" + "-1");
}

TEST(typical90_problem054, case4) {
	check(
			string("") + "11 5\n" + "4\n" + "2 6 9 10\n" + "3\n" + "1 3 8\n" + "5\n" + "2 4 6 8 10\n" + "2\n" + "6 7\n"
					+ "4\n" + "5 6 7 8",
			string("") + "0\n" + "2\n" + "1\n" + "2\n" + "2\n" + "2\n" + "2\n" + "1\n" + "3\n" + "2\n" + "-1");
}
