#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc198A";

TEST(abc198A, case1) {
	check(PATH + COMMAND, string("") + "2", string("") + "1");
}

TEST(abc198A, case2) {
	check(PATH + COMMAND, string("") + "1", string("") + "0");
}

TEST(abc198A, case3) {
	check(PATH + COMMAND, string("") + "3", string("") + "2");
}
