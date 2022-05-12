#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc195_problemB, case1) {
	check(PATH + COMMAND, string("") + "100 200 2", string("") + "10 20");
}

TEST(abc195_problemB, case2) {
	check(PATH + COMMAND, string("") + "120 150 2", string("") + "14 16");
}

TEST(abc195_problemB, case3) {
	check(PATH + COMMAND, string("") + "300 333 1", string("") + "UNSATISFIABLE");
}
