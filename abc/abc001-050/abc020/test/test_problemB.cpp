#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc020_problemB, case1) {
	check(PATH + COMMAND, string("") + "1 23", string("") + "246");
}

TEST(abc020_problemB, case2) {
	check(PATH + COMMAND, string("") + "999 999", string("") + "1999998");
}
