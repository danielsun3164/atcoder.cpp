#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc206D";

TEST(abc206D, case1) {
	check(PATH + COMMAND, string("") + "8\n" + "1 5 3 2 5 2 3 1", string("") + "2");
}

TEST(abc206D, case2) {
	check(PATH + COMMAND, string("") + "7\n" + "1 2 3 4 1 2 3", string("") + "1");
}

TEST(abc206D, case3) {
	check(PATH + COMMAND, string("") + "1\n" + "200000", string("") + "0");
}
