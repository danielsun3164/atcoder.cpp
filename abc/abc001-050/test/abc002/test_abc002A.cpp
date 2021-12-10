#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc002A";

TEST(abc002A, case1) {
	check(PATH + COMMAND, string("") + "10 11", string("") + "11");
}

TEST(abc002A, case2) {
	check(PATH + COMMAND, string("") + "100000000 10000000", string("") + "100000000");
}
