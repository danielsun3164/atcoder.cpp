#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "180 186 189 191 218", string("") + "Yes\n" + "1 1\n" + "2 3 4");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "123 523", string("") + "Yes\n" + "1 1\n" + "1 2");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "6\n" + "2013 1012 2765 2021 508 6971", string("") + "No");
}
