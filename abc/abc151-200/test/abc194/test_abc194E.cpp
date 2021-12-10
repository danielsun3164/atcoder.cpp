#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc194E";

TEST(abc194E, case1) {
	check(PATH + COMMAND, string("") + "3 2\n" + "0 0 1", string("") + "1");
}

TEST(abc194E, case2) {
	check(PATH + COMMAND, string("") + "3 2\n" + "1 1 1", string("") + "0");
}

TEST(abc194E, case3) {
	check(PATH + COMMAND, string("") + "3 2\n" + "0 1 0", string("") + "2");
}

TEST(abc194E, case4) {
	check(PATH + COMMAND, string("") + "7 3\n" + "0 0 1 2 0 1 0", string("") + "2");
}
