#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc185A";

TEST(abc185A, case1) {
	check(PATH + COMMAND, string("") + "5 3 7 11", string("") + "3");
}

TEST(abc185A, case2) {
	check(PATH + COMMAND, string("") + "100 100 1 100", string("") + "1");
}
