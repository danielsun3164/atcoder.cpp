#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "2 3 4", string("") + "7");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "17 2 34", string("") + "362");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "267 294 165", string("") + "88577");
}
