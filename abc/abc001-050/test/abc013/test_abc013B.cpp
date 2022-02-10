#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc013B";

TEST(abc013B, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "6", string("") + "2");
}

TEST(abc013B, case2) {
	check(PATH + COMMAND, string("") + "6\n" + "4", string("") + "2");
}

TEST(abc013B, case3) {
	check(PATH + COMMAND, string("") + "8\n" + "1", string("") + "3");
}
