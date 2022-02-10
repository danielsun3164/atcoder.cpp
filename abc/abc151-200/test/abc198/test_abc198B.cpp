#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc198B";

TEST(abc198B, case1) {
	check(PATH + COMMAND, string("") + "1210", string("") + "Yes");
}

TEST(abc198B, case2) {
	check(PATH + COMMAND, string("") + "777", string("") + "Yes");
}

TEST(abc198B, case3) {
	check(PATH + COMMAND, string("") + "123456789", string("") + "No");
}
