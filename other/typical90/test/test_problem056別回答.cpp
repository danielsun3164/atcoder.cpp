#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem056別回答";

TEST(typical90_problem056別回答, case1) {
	check(PATH + COMMAND, string("") + "3 34\n" + "3 14\n" + "15 9\n" + "26 5", string("") + "BAB");
}

TEST(typical90_problem056別回答, case2) {
	check(PATH + COMMAND, string("") + "5 77\n" + "1 16\n" + "3 91\n" + "43 9\n" + "4 26\n" + "23 11",
			string("") + "BABBA", string("") + "BAAAB");
}

TEST(typical90_problem056別回答, case3) {
	check(PATH + COMMAND, string("") + "5 59\n" + "8 13\n" + "55 5\n" + "58 8\n" + "23 14\n" + "4 61",
			string("") + "Impossible");
}
