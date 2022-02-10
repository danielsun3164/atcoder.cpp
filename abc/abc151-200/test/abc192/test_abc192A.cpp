#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc192A";

TEST(abc192A, case1) {
	check(PATH + COMMAND, string("") + "140", string("") + "60");
}

TEST(abc192A, case2) {
	check(PATH + COMMAND, string("") + "1000", string("") + "100");
}
