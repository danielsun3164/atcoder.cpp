#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem074別回答";

TEST(typical90_problem074別回答, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "aba", string("") + "2");
}

TEST(typical90_problem074別回答, case2) {
	check(PATH + COMMAND, string("") + "10\n" + "aaaaaaaaaa", string("") + "0");
}

TEST(typical90_problem074別回答, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "baaca", string("") + "17");
}
