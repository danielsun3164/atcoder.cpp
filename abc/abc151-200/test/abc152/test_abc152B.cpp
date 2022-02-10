#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc152B";

TEST(abc152B, case1) {
	check(PATH + COMMAND, string("") + "4 3", string("") + "3333");
}

TEST(abc152B, case2) {
	check(PATH + COMMAND, string("") + "7 7", string("") + "7777777");
}
