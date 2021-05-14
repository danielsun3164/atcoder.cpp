#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc199A";

TEST(abc199A, case1) {
	check(COMMAND, string("") + "2 2 4", string("") + "Yes");
}

TEST(abc199A, case2) {
	check(COMMAND, string("") + "10 10 10", string("") + "No");
}

TEST(abc199A, case3) {
	check(COMMAND, string("") + "3 4 5", string("") + "No");
}
