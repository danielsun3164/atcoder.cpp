#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(abc193_problemF, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "BB\n" + "BW", string("") + "2");
}

TEST(abc193_problemF, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "BBB\n" + "BBB\n" + "W?W", string("") + "4");
}

TEST(abc193_problemF, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "?????\n" + "?????\n" + "?????\n" + "?????\n" + "?????", string("") + "40");
}
