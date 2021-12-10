#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc206E";

TEST(abc206E, case1) {
	check(PATH + COMMAND, string("") + "3 7", string("") + "2");
}

TEST(abc206E, case2) {
	check(PATH + COMMAND, string("") + "4 10", string("") + "12");
}

TEST(abc206E, case3) {
	check(PATH + COMMAND, string("") + "1 1000000", string("") + "392047955148");
}
