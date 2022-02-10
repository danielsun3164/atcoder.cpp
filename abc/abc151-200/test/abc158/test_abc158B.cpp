#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc158B";

TEST(abc158B, case1) {
	check(PATH + COMMAND, string("") + "8 3 4", string("") + "4");
}

TEST(abc158B, case2) {
	check(PATH + COMMAND, string("") + "8 0 4", string("") + "0");
}

TEST(abc158B, case3) {
	check(PATH + COMMAND, string("") + "6 2 4", string("") + "2");
}
