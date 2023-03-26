#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(abc215_problemB, case1) {
	check(PATH + COMMAND, string("") + "6", string("") + "2");
}

TEST(abc215_problemB, case2) {
	check(PATH + COMMAND, string("") + "1", string("") + "0");
}

TEST(abc215_problemB, case3) {
	check(PATH + COMMAND, string("") + "1000000000000000000", string("") + "59");
}
