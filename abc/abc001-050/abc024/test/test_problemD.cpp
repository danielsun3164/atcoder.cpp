#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "15\n" + "35\n" + "21", string("") + "4 2");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "126\n" + "252\n" + "210", string("") + "5 4");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "144949225\n" + "545897619\n" + "393065978", string("") + "314159 365358");
}
