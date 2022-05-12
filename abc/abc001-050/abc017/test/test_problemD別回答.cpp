#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD別回答";

TEST(abc017_problemD, case1) {
	check(PATH + COMMAND, string("") + "5 2\n" + "1\n" + "2\n" + "1\n" + "2\n" + "2", string("") + "5");
}

TEST(abc017_problemD, case2) {
	check(PATH + COMMAND, string("") + "6 6\n" + "1\n" + "2\n" + "3\n" + "4\n" + "5\n" + "6", string("") + "32");
}
