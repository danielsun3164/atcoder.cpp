#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc207B";

TEST(abc207B, case1) {
	check(PATH + COMMAND, string("") + "5 2 3 2", string("") + "2");
}

TEST(abc207B, case2) {
	check(PATH + COMMAND, string("") + "6 9 2 3", string("") + "-1");
}
