#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc204F別回答";

TEST(abc204F別回答, case1) {
	check(COMMAND, string("") + "2 2", string("") + "7");
}

TEST(abc204F別回答, case2) {
	check(COMMAND, string("") + "3 3", string("") + "131");
}

TEST(abc204F別回答, case3) {
	check(COMMAND, string("") + "5 100", string("") + "379944232");
}
