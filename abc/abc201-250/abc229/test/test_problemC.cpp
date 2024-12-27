#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc229/C";
}

TEST(abc229_problemC, case1) {
	check(string("") + "3 5\n" + "3 1\n" + "4 2\n" + "2 3", string("") + "15");
}

TEST(abc229_problemC, case2) {
	check(string("") + "4 100\n" + "6 2\n" + "1 5\n" + "3 9\n" + "8 7", string("") + "100");
}

TEST(abc229_problemC, case3) {
	check(string("") + "10 3141\n" + "314944731 649\n" + "140276783 228\n" + "578012421 809\n" +
			  "878510647 519\n" + "925326537 943\n" + "337666726 611\n" + "879137070 306\n" +
			  "87808915 39\n" + "756059990 244\n" + "228622672 291",
		  string("") + "2357689932073");
}
