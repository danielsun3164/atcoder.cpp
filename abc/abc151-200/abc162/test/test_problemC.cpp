#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(abc162_problemC, case1) {
	check(PATH + COMMAND, string("") + "2", string("") + "9");
}

TEST(abc162_problemC, case2) {
	check(PATH + COMMAND, string("") + "200", string("") + "10813692");
}
