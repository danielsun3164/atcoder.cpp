#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problem039";
	EXTERNAL = "typical90/039";
}

TEST(typical90_problem039, case1) {
	check(string("") + "2\n" + "1 2", string("") + "1");
}

TEST(typical90_problem039, case2) {
	check(string("") + "4\n" + "1 2\n" + "1 3\n" + "1 4", string("") + "9");
}

TEST(typical90_problem039, case3) {
	check(
			string("") + "12\n" + "1 2\n" + "3 1\n" + "4 2\n" + "2 5\n" + "3 6\n" + "3 7\n" + "8 4\n" + "4 9\n"
					+ "10 5\n" + "11 7\n" + "7 12", string("") + "211");
}
