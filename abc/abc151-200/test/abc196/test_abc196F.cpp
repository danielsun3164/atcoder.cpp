#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc196F";

TEST(abc196F, case1) {
	check(PATH + COMMAND, string("") + "0001\n" + "101", string("") + "1");
}

TEST(abc196F, case2) {
	check(PATH + COMMAND, string("") + "0101010\n" + "1010101", string("") + "7");
}

TEST(abc196F, case3) {
	check(PATH + COMMAND, string("") + "10101000010011011110\n" + "0010011111", string("") + "1");
}
