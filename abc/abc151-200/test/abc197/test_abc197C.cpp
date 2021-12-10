#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc197C";

TEST(abc197C, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1 5 7", string("") + "2");
}

TEST(abc197C, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "10 10 10", string("") + "0");
}

TEST(abc197C, case3) {
	check(PATH + COMMAND, string("") + "4\n" + "1 3 3 1", string("") + "0");
}
