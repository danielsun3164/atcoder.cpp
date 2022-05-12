#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(abc192_problemF, case1) {
	check(PATH + COMMAND, string("") + "3 9999999999\n" + "3 6 8", string("") + "4999999994");
}

TEST(abc192_problemF, case2) {
	check(PATH + COMMAND, string("") + "1 1000000000000000000\n" + "1", string("") + "999999999999999999");
}
