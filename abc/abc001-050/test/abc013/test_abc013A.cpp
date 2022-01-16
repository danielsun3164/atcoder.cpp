#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc013A";

TEST(abc013A, case1) {
	check(PATH + COMMAND, string("") + "A", string("") + "1");
}

TEST(abc013A, case2) {
	check(PATH + COMMAND, string("") + "B", string("") + "2");
}

TEST(abc013A, case3) {
	check(PATH + COMMAND, string("") + "C", string("") + "3");
}

TEST(abc013A, case4) {
	check(PATH + COMMAND, string("") + "D", string("") + "4");
}
