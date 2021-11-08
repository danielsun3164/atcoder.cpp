#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc196C";

TEST(abc196C, case1) {
	check(COMMAND, string("") + "33", string("") + "3");
}

TEST(abc196C, case2) {
	check(COMMAND, string("") + "1333", string("") + "13");
}

TEST(abc196C, case3) {
	check(COMMAND, string("") + "10000000", string("") + "999");
}
