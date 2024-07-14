#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem063";
	EXTERNAL = "typical90/063";
}

TEST(typical90_problem063, case1) {
	check(
		string("") + "4 6\n" + "1 1 1 1 1 2\n" + "1 2 2 2 2 2\n" + "1 2 2 3 2 3\n" + "1 2 3 2 2 3",
		string("") + "6");
}

TEST(typical90_problem063, case2) {
	check(string("") + "3 3\n" + "1 2 3\n" + "4 5 6\n" + "7 8 9", string("") + "1");
}

TEST(typical90_problem063, case3) {
	check(string("") + "5 3\n" + "7 7 7\n" + "7 7 7\n" + "7 7 7\n" + "7 7 7\n" + "7 7 7",
		  string("") + "15");
}
