#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc156C";

TEST(abc156C, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "1 4", string("") + "5");
}

TEST(abc156C, case2) {
	check(PATH + COMMAND, string("") + "7\n" + "14 14 2 13 56 2 37", string("") + "2354");
}
