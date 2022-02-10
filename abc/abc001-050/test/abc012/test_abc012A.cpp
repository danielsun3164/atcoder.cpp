#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc012A";

TEST(abc012A, case1) {
	check(PATH + COMMAND, string("") + "1 2", string("") + "2 1");
}

TEST(abc012A, case2) {
	check(PATH + COMMAND, string("") + "5 5", string("") + "5 5");
}
