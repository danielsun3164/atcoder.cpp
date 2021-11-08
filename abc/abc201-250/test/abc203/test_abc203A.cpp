#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc203A";

TEST(abc203A, case1) {
	check(COMMAND, string("") + "2 5 2", string("") + "5");
}

TEST(abc203A, case2) {
	check(COMMAND, string("") + "4 5 6", string("") + "0");
}

TEST(abc203A, case3) {
	check(COMMAND, string("") + "1 1 1", string("") + "1");
}
