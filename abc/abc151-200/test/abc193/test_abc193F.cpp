#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc193F";

TEST(abc193F, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "BB\n" + "BW", string("") + "2");
}

TEST(abc193F, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "BBB\n" + "BBB\n" + "W?W", string("") + "4");
}

TEST(abc193F, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "?????\n" + "?????\n" + "?????\n" + "?????\n" + "?????", string("") + "40");
}
