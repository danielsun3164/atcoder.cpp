#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(abc203_problemB, case1) {
	check(PATH + COMMAND, string("") + "1 2", string("") + "203");
}

TEST(abc203_problemB, case2) {
	check(PATH + COMMAND, string("") + "3 3", string("") + "1818");
}
