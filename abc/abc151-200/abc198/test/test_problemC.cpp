#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(abc198_problemC, case1) {
	check(PATH + COMMAND, string("") + "5 15 0", string("") + "3");
}

TEST(abc198_problemC, case2) {
	check(PATH + COMMAND, string("") + "5 11 0", string("") + "3");
}

TEST(abc198_problemC, case3) {
	check(PATH + COMMAND, string("") + "3 4 4", string("") + "2");
}
