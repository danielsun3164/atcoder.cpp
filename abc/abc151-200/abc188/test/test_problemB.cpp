#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc188_problemB, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "-3 6\n" + "4 2", string("") + "Yes");
}

TEST(abc188_problemB, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "4 5\n" + "-1 -3", string("") + "No");
}

TEST(abc188_problemB, case3) {
	check(PATH + COMMAND, string("") + "3\n" + "1 3 5\n" + "3 -6 3", string("") + "Yes");
}
