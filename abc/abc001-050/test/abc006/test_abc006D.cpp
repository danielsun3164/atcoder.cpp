#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc006D";

TEST(abc006D, case1) {
	check(PATH + COMMAND, string("") + "6\n" + "1\n" + "3\n" + "5\n" + "2\n" + "4\n" + "6", string("") + "2");
}

TEST(abc006D, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "5\n" + "4\n" + "3\n" + "2\n" + "1", string("") + "4");
}

TEST(abc006D, case3) {
	check(PATH + COMMAND, string("") + "7\n" + "1\n" + "2\n" + "3\n" + "4\n" + "5\n" + "6\n" + "7", string("") + "0");
}
