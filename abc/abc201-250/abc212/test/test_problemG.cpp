#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemG";

TEST(problemG, case1) {
	check(PATH + COMMAND, string("") + "3", string("") + "4");
}

TEST(problemG, case2) {
	check(PATH + COMMAND, string("") + "11", string("") + "64");
}

TEST(problemG, case3) {
	check(PATH + COMMAND, string("") + "998244353", string("") + "329133417");
}
