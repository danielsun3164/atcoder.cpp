#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem063";

TEST(typical90_problem063, case1) {
	check(PATH + COMMAND, string("") + "4 6\n" + "1 1 1 1 1 2\n" + "1 2 2 2 2 2\n" + "1 2 2 3 2 3\n" + "1 2 3 2 2 3",
			string("") + "6");
}

TEST(typical90_problem063, case2) {
	check(PATH + COMMAND, string("") + "3 3\n" + "1 2 3\n" + "4 5 6\n" + "7 8 9", string("") + "1");
}

TEST(typical90_problem063, case3) {
	check(PATH + COMMAND, string("") + "5 3\n" + "7 7 7\n" + "7 7 7\n" + "7 7 7\n" + "7 7 7\n" + "7 7 7",
			string("") + "15");
}
