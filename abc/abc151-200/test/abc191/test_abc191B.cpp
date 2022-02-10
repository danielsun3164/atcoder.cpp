#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc191B";

TEST(abc191B, case1) {
	check(PATH + COMMAND, string("") + "5 5\n" + "3 5 6 5 4", string("") + "3 6 4");
}

TEST(abc191B, case2) {
	check(PATH + COMMAND, string("") + "3 3\n" + "3 3 3", string("") + "");
}
