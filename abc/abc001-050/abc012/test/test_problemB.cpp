#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc012_problemB, case1) {
	check(PATH + COMMAND, string("") + "3661", string("") + "01:01:01");
}

TEST(abc012_problemB, case2) {
	check(PATH + COMMAND, string("") + "86399", string("") + "23:59:59");
}
