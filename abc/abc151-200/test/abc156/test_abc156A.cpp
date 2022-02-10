#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc156A";

TEST(abc156A, case1) {
	check(PATH + COMMAND, string("") + "2 2919", string("") + "3719");
}

TEST(abc156A, case2) {
	check(PATH + COMMAND, string("") + "22 3051", string("") + "3051");
}
