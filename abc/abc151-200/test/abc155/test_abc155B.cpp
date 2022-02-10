#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc155B";

TEST(abc155B, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "6 7 9 10 31", string("") + "APPROVED");
}

TEST(abc155B, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "28 27 24", string("") + "DENIED");
}
