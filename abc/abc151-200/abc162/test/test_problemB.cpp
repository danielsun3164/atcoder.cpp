#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc162_problemB, case1) {
	check(PATH + COMMAND, string("") + "15", string("") + "60");
}

TEST(abc162_problemB, case2) {
	check(PATH + COMMAND, string("") + "1000000", string("") + "266666333332");
}
