#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc187_problemD, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "2 1\n" + "2 2\n" + "5 1\n" + "1 3", string("") + "1");
}

TEST(abc187_problemD, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "2 1\n" + "2 1\n" + "2 1\n" + "2 1\n" + "2 1", string("") + "3");
}

TEST(abc187_problemD, case3) {
	check(PATH + COMMAND, string("") + "1\n" + "273 691", string("") + "1");
}
