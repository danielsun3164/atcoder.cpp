#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc204D";

TEST(abc204D, case1) {
	check(COMMAND, string("") + "5\n" + "8 3 7 2 5", string("") + "13");
}

TEST(abc204D, case2) {
	check(COMMAND, string("") + "2\n" + "1000 1", string("") + "1000");
}

TEST(abc204D, case3) {
	check(COMMAND, string("") + "9\n" + "3 14 15 9 26 5 35 89 79", string("") + "138");
}
