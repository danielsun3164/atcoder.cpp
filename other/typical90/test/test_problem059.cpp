#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problem059";
	EXTERNAL = "typical90/059";
}

TEST(typical90_problem059, case1) {
	check(
			string("") + "6 6 3\n" + "1 3\n" + "2 4\n" + "1 4\n" + "4 6\n" + "5 6\n" + "1 5\n" + "2 6\n" + "1 5\n"
					+ "3 6", string("") + "Yes\n" + "Yes\n" + "No");
}

TEST(typical90_problem059, case2) {
	check(string("") + "3 2 2\n" + "1 2\n" + "1 2\n" + "1 2\n" + "2 3", string("") + "Yes\n" + "No");
}

TEST(typical90_problem059, case3) {
	check(string("") + "2 1 1\n" + "1 2\n" + "1 2", string("") + "Yes");
}
