#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc151A";

TEST(abc151A, case1) {
	check(PATH + COMMAND, string("") + "a", string("") + "b");
}

TEST(abc151A, case2) {
	check(PATH + COMMAND, string("") + "y", string("") + "z");
}
