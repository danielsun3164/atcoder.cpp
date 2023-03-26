#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(abc151_problemE, case1) {
	check(PATH + COMMAND, string("") + "4 2\n" + "1 1 3 4", string("") + "11");
}

TEST(abc151_problemE, case2) {
	check(PATH + COMMAND, string("") + "6 3\n" + "10 10 10 -10 -10 -10", string("") + "360");
}

TEST(abc151_problemE, case3) {
	check(PATH + COMMAND, string("") + "3 1\n" + "1 1 1", string("") + "0");
}

TEST(abc151_problemE, case4) {
	check(PATH + COMMAND, string("") + "10 6\n" + "1000000000 1000000000 1000000000 1000000000 1000000000 0 0 0 0 0",
			string("") + "999998537");
}
