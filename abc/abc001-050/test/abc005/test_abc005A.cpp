#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc005A";

TEST(abc005A, case1) {
	check(COMMAND, string("") + "4 8", string("") + "2");
}

TEST(abc005A, case2) {
	check(COMMAND, string("") + "4 7", string("") + "1");
}

TEST(abc005A, case3) {
	check(COMMAND, string("") + "4 3", string("") + "0");
}
