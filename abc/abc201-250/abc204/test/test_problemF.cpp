#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemF";

TEST(abc204_problemF, case1) {
	check(PATH + COMMAND, string("") + "2 2", string("") + "7");
}

TEST(abc204_problemF, case2) {
	check(PATH + COMMAND, string("") + "3 3", string("") + "131");
}

TEST(abc204_problemF, case3) {
	check(PATH + COMMAND, string("") + "5 100", string("") + "379944232");
}
