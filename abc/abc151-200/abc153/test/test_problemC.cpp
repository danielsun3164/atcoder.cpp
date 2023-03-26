#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(abc153_problemC, case1) {
	check(PATH + COMMAND, string("") + "3 1\n" + "4 1 5", string("") + "5");
}

TEST(abc153_problemC, case2) {
	check(PATH + COMMAND, string("") + "8 9\n" + "7 9 3 2 3 8 4 6", string("") + "0");
}

TEST(abc153_problemC, case3) {
	check(PATH + COMMAND, string("") + "3 0\n" + "1000000000 1000000000 1000000000", string("") + "3000000000");
}
