#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc152C";

TEST(abc152C, case1) {
	check(COMMAND, string("") + "5\n" + "4 2 5 1 3", string("") + "3");
}

TEST(abc152C, case2) {
	check(COMMAND, string("") + "4\n" + "4 3 2 1", string("") + "4");
}

TEST(abc152C, case3) {
	check(COMMAND, string("") + "6\n" + "1 2 3 4 5 6", string("") + "1");
}

TEST(abc152C, case4) {
	check(COMMAND, string("") + "8\n" + "5 7 4 2 6 8 1 3", string("") + "4");
}

TEST(abc152C, case5) {
	check(COMMAND, string("") + "1\n" + "1", string("") + "1");
}
