#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc188C";

TEST(abc188C, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "1 4 2 5", string("") + "2");
}

TEST(abc188C, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "3 1 5 4", string("") + "1");
}

TEST(abc188C, case3) {
	check(PATH + COMMAND, string("") + "4\n" + "6 13 12 5 3 7 10 11 16 9 8 15 2 1 14 4", string("") + "2");
}
