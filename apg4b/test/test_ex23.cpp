#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "ex23";

TEST(ex23, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "1 4 4 2 3", string("") + "4 2");
}

TEST(ex23, case2) {
	check(PATH + COMMAND, string("") + "6\n" + "3 2 3 1 3 2", string("") + "3 3");
}

TEST(ex23, case3) {
	check(PATH + COMMAND, string("") + "1\n" + "1000000000", string("") + "1000000000 1");
}
