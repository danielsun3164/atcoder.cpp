#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "2 3\n" + "2 2 3\n" + "3 2 2", string("") + "2");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "3 3\n" + "99 99 99\n" + "99 0 99\n" + "99 99 99", string("") + "792");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "3 2\n" + "4 4\n" + "4 4\n" + "4 4", string("") + "0");
}
