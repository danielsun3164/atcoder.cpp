#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC066/B";
}

TEST(abc050_problemB, case1) {
	check(string("") + "3\n" + "2 1 4\n" + "2\n" + "1 1\n" + "2 3", string("") + "6\n" + "9");
}

TEST(abc050_problemB, case2) {
	check(string("") + "5\n" + "7 2 3 8 5\n" + "3\n" + "4 2\n" + "1 7\n" + "4 13",
		  string("") + "19\n" + "25\n" + "30");
}
