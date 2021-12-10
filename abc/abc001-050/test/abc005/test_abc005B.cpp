#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc005B";

TEST(abc005B, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1\n" + "2\n" + "3", string("") + "1");
}

TEST(abc005B, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "3\n" + "3\n" + "3", string("") + "3");
}

TEST(abc005B, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "3\n" + "1\n" + "4\n" + "1\n" + "5", string("") + "1");
}
