#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc194A";

TEST(abc194A, case1) {
	check(PATH + COMMAND, string("") + "10 8", string("") + "1");
}

TEST(abc194A, case2) {
	check(PATH + COMMAND, string("") + "1 2", string("") + "3");
}

TEST(abc194A, case3) {
	check(PATH + COMMAND, string("") + "0 0", string("") + "4");
}
