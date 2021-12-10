#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc003A";

TEST(abc003A, case1) {
	check(PATH + COMMAND, string("") + "6", string("") + "35000");
}

TEST(abc003A, case2) {
	check(PATH + COMMAND, string("") + "91", string("") + "460000");
}
