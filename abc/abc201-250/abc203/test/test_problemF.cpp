#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "4 1\n" + "2 3 4 9", string("") + "2 1");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "3 3\n" + "2 3 5", string("") + "0 3");
}

TEST(problemF, case3) {
	check(PATH + COMMAND, string("") + "9 8\n" + "137 55 56 60 27 28 133 56 55", string("") + "1 4");
}