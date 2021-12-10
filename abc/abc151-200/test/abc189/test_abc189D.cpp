#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc189D";

TEST(abc189D, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "AND\n" + "OR", string("") + "5");
}

TEST(abc189D, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "OR\n" + "OR\n" + "OR\n" + "OR\n" + "OR", string("") + "63");
}
