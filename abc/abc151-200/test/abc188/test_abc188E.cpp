#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc188E";

TEST(abc188E, case1) {
	check(PATH + COMMAND, string("") + "4 3\n" + "2 3 1 5\n" + "2 4\n" + "1 2\n" + "1 3", string("") + "3");
}

TEST(abc188E, case2) {
	check(PATH + COMMAND, string("") + "5 5\n" + "13 8 3 15 18\n" + "2 4\n" + "1 2\n" + "4 5\n" + "2 3\n" + "1 3",
			string("") + "10");
}

TEST(abc188E, case3) {
	check(PATH + COMMAND, string("") + "3 1\n" + "1 100 1\n" + "2 3", string("") + "-99");
}
