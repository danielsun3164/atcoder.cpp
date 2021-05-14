#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc196A";

TEST(abc196A, case1) {
	check(COMMAND, string("") + "0 10\n" + "0 10", string("") + "10");
}

TEST(abc196A, case2) {
	check(COMMAND, string("") + "-100 -100\n" + "100 100", string("") + "-200");
}

TEST(abc196A, case3) {
	check(COMMAND, string("") + "-100 100\n" + "-100 100", string("") + "200");
}
