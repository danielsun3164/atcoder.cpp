#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(abc197_problemC, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1 5 7", string("") + "2");
}

TEST(abc197_problemC, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "10 10 10", string("") + "0");
}

TEST(abc197_problemC, case3) {
	check(PATH + COMMAND, string("") + "4\n" + "1 3 3 1", string("") + "0");
}
