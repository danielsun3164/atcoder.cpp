#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc163_problemD, case1) {
	check(PATH + COMMAND, string("") + "3 2", string("") + "10");
}

TEST(abc163_problemD, case2) {
	check(PATH + COMMAND, string("") + "200000 200001", string("") + "1");
}

TEST(abc163_problemD, case3) {
	check(PATH + COMMAND, string("") + "141421 35623", string("") + "220280457");
}
