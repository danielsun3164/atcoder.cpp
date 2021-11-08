#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc204A";

TEST(abc204A, case1) {
	check(COMMAND, string("") + "0 1", string("") + "2");
}

TEST(abc204A, case2) {
	check(COMMAND, string("") + "0 0", string("") + "0");
}
