#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc035_problemB, case1) {
	check(PATH + COMMAND, string("") + "UL?\n" + "1", string("") + "3");
}

TEST(abc035_problemB, case2) {
	check(PATH + COMMAND, string("") + "UD?\n" + "1", string("") + "1");
}

TEST(abc035_problemB, case3) {
	check(PATH + COMMAND, string("") + "UUUU?DDR?LLLL\n" + "1", string("") + "7");
}

TEST(abc035_problemB, case4) {
	check(PATH + COMMAND, string("") + "UULL?\n" + "2", string("") + "3");
}
