#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc152_problemB, case1) {
	check(PATH + COMMAND, string("") + "4 3", string("") + "3333");
}

TEST(abc152_problemB, case2) {
	check(PATH + COMMAND, string("") + "7 7", string("") + "7777777");
}
