#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc205F";

TEST(abc205F, case1) {
	check(PATH + COMMAND, string("") + "2 3 3\n" + "1 1 2 2\n" + "1 2 2 3\n" + "1 1 1 3", string("") + "2");
}

TEST(abc205F, case2) {
	check(PATH + COMMAND, string("") + "5 5 3\n" + "1 1 5 5\n" + "1 1 4 4\n" + "2 2 3 3", string("") + "3");
}
