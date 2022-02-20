#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "101\n" + "2", string("") + "2");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "?0?\n" + "1", string("") + "3");
}

TEST(problemF, case3) {
	check(PATH + COMMAND, string("") + "10111?10??1101??1?00?1?01??00010?0?1??\n" + "998244353", string("") + "235562598");
}

TEST(problemF, case4) {
	check(PATH + COMMAND, string("") + "?\n" + "1", string("") + "0");
}
