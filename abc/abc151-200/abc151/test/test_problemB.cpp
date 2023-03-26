#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc151_problemB, case1) {
	check(PATH + COMMAND, string("") + "5 10 7\n" + "8 10 3 6", string("") + "8");
}

TEST(abc151_problemB, case2) {
	check(PATH + COMMAND, string("") + "4 100 60\n" + "100 100 100", string("") + "0");
}

TEST(abc151_problemB, case3) {
	check(PATH + COMMAND, string("") + "4 100 60\n" + "0 0 0", string("") + "-1");
}
