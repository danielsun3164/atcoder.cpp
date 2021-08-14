#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc209A";

TEST(abc209A, case1) {
	check(COMMAND, string("") + "2 4", string("") + "3");
}

TEST(abc209A, case2) {
	check(COMMAND, string("") + "10 100", string("") + "91");
}

TEST(abc209A, case3) {
	check(COMMAND, string("") + "3 2", string("") + "0");
}
