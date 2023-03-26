#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem008";

TEST(typical90_problem008, case1) {
	check(PATH + COMMAND, string("") + "10\n" + "attcordeer", string("") + "4");
}

TEST(typical90_problem008, case2) {
	check(PATH + COMMAND, string("") + "41\n" + "btwogablwetwoiehocghiewobadegwhoihegnldir", string("") + "2");
}

TEST(typical90_problem008, case3) {
	check(PATH + COMMAND,
			string("") + "140\n"
					+ "aaaaaaaaaaaaaaaaaaaattttttttttttttttttttccccccccccccccccccccooooooooooooooooooooddddddddddddddddddddeeeeeeeeeeeeeeeeeeeerrrrrrrrrrrrrrrrrrrr",
			string("") + "279999993");
}
