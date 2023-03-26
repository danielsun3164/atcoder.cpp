#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(abc191_problemF, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "6 9 12", string("") + "2");
}

TEST(abc191_problemF, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "8 2 12 6", string("") + "1");
}

TEST(abc191_problemF, case3) {
	check(PATH + COMMAND, string("") + "7\n" + "30 28 33 49 27 37 48", string("") + "7");
}
