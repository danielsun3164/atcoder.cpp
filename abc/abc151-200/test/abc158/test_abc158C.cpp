#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc158C";

TEST(abc158C, case1) {
	check(PATH + COMMAND, string("") + "2 2", string("") + "25");
}

TEST(abc158C, case2) {
	check(PATH + COMMAND, string("") + "8 10", string("") + "100");
}

TEST(abc158C, case3) {
	check(PATH + COMMAND, string("") + "19 99", string("") + "-1");
}
