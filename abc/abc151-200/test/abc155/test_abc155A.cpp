#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc155A";

TEST(abc155A, case1) {
	check(PATH + COMMAND, string("") + "5 7 5", string("") + "Yes");
}

TEST(abc155A, case2) {
	check(PATH + COMMAND, string("") + "4 4 4", string("") + "No");
}

TEST(abc155A, case3) {
	check(PATH + COMMAND, string("") + "4 9 6", string("") + "No");
}

TEST(abc155A, case4) {
	check(PATH + COMMAND, string("") + "3 3 4", string("") + "Yes");
}
