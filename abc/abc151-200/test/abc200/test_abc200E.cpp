#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc200E";

TEST(abc200E, case1) {
	check(COMMAND, string("") + "2 5", string("") + "1 2 2");
}

TEST(abc200E, case2) {
	check(COMMAND, string("") + "1000000 1000000000000000000", string("") + "1000000 1000000 1000000");
}

TEST(abc200E, case3) {
	check(COMMAND, string("") + "9 47", string("") + "3 1 4");
}
