#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc007D";

TEST(abc007D, case1) {
	check(COMMAND, string("") + "1 9", string("") + "2");
}

TEST(abc007D, case2) {
	check(COMMAND, string("") + "40 49", string("") + "10");
}

TEST(abc007D, case3) {
	check(COMMAND, string("") + "1 1000", string("") + "488");
}

TEST(abc007D, case4) {
	check(COMMAND, string("") + "1 1000000000000000000", string("") + "981985601490518016");
}
