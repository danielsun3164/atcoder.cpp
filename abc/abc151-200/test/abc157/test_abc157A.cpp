#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc157A";

TEST(abc157A, case1) {
	check(PATH + COMMAND, string("") + "5", string("") + "3");
}

TEST(abc157A, case2) {
	check(PATH + COMMAND, string("") + "2", string("") + "1");
}

TEST(abc157A, case3) {
	check(PATH + COMMAND, string("") + "100", string("") + "50");
}
