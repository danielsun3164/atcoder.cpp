#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemG";

TEST(abc213_problemG, case1) {
	check(PATH + COMMAND, string("") + "3 2\n" + "1 2\n" + "2 3", string("") + "2\n" + "1");
}

TEST(abc213_problemG, case2) {
	check(PATH + COMMAND, string("") + "5 6\n" + "1 2\n" + "1 4\n" + "1 5\n" + "2 3\n" + "2 5\n" + "3 4",
			string("") + "43\n" + "31\n" + "37\n" + "41");
}

TEST(abc213_problemG, case3) {
	check(PATH + COMMAND, string("") + "2 0", string("") + "0");
}
