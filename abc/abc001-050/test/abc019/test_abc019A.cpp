#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc019A";

TEST(abc019A, case1) {
	check(PATH + COMMAND, string("") + "2 3 4", string("") + "3");
}

TEST(abc019A, case2) {
	check(PATH + COMMAND, string("") + "5 100 5", string("") + "5");
}

TEST(abc019A, case3) {
	check(PATH + COMMAND, string("") + "3 3 3", string("") + "3");
}

TEST(abc019A, case4) {
	check(PATH + COMMAND, string("") + "3 3 4", string("") + "3");
}
