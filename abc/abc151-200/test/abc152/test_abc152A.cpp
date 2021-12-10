#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc152A";

TEST(abc152A, case1) {
	check(PATH + COMMAND, string("") + "3 3", string("") + "Yes");
}

TEST(abc152A, case2) {
	check(PATH + COMMAND, string("") + "3 2", string("") + "No");
}

TEST(abc152A, case3) {
	check(PATH + COMMAND, string("") + "1 1", string("") + "Yes");
}
