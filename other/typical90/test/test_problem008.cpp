#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem008";
	EXTERNAL = "typical90/008";
}

TEST(typical90_problem008, case1) {
	check(string("") + "10\n" + "attcordeer", string("") + "4");
}

TEST(typical90_problem008, case2) {
	check(string("") + "41\n" + "btwogablwetwoiehocghiewobadegwhoihegnldir", string("") + "2");
}

TEST(typical90_problem008, case3) {
	check(string("") + "140\n" +
			  "aaaaaaaaaaaaaaaaaaaattttttttttttttttttttccccccccccccccccccccoooooooooooooooooooodddd"
			  "ddddddddddddddddeeeeeeeeeeeeeeeeeeeerrrrrrrrrrrrrrrrrrrr",
		  string("") + "279999993");
}
