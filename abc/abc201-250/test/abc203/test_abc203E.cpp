#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc203E";

TEST(abc203E, case1) {
	check(COMMAND, string("") + "2 4\n" + "1 1\n" + "1 2\n" + "2 0\n" + "4 2", string("") + "3");
}

TEST(abc203E, case2) {
	check(COMMAND, string("") + "1 1\n" + "1 1", string("") + "0");
}
