#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc199B";

TEST(abc199B, case1) {
	check(COMMAND, string("") + "2\n" + "3 2\n" + "7 5", string("") + "3");
}

TEST(abc199B, case2) {
	check(COMMAND, string("") + "3\n" + "1 5 3\n" + "10 7 3", string("") + "0");
}

TEST(abc199B, case3) {
	check(COMMAND, string("") + "3\n" + "3 2 5\n" + "6 9 8", string("") + "2");
}
