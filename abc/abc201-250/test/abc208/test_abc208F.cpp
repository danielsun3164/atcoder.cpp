#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc208F";

TEST(abc208F, case1) {
	check(COMMAND, string("") + "3 4 2", string("") + "35");
}

TEST(abc208F, case2) {
	check(COMMAND, string("") + "0 1 2", string("") + "0");
}

TEST(abc208F, case3) {
	check(COMMAND, string("") + "1000000000000000000 30 123456", string("") + "297085514");
}
