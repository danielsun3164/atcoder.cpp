#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc207A";

TEST(abc207A, case1) {
	check(COMMAND, string("") + "3 4 5", string("") + "9");
}

TEST(abc207A, case2) {
	check(COMMAND, string("") + "6 6 6", string("") + "12");
}

TEST(abc207A, case3) {
	check(COMMAND, string("") + "99 99 98", string("") + "198");
}
