#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "0.2 0.8 1.1", string("") + "3");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "100 100 1", string("") + "5");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "42782.4720 31949.0192 99999.99", string("") + "31415920098");
}
