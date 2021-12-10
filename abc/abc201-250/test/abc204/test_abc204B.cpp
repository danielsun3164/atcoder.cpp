#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc204B";

TEST(abc204B, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "6 17 28", string("") + "25");
}

TEST(abc204B, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "8 9 10 11", string("") + "1");
}
