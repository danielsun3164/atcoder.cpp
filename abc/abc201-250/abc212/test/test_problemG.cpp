#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemG";

TEST(abc212_problemG, case1) {
	check(PATH + COMMAND, string("") + "3", string("") + "4");
}

TEST(abc212_problemG, case2) {
	check(PATH + COMMAND, string("") + "11", string("") + "64");
}

TEST(abc212_problemG, case3) {
	check(PATH + COMMAND, string("") + "998244353", string("") + "329133417");
}
