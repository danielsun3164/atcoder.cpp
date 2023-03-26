#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemD";

TEST(abc214_problemD, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1 2 10\n" + "2 3 20", string("") + "50");
}

TEST(abc214_problemD, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "1 2 1\n" + "2 3 2\n" + "4 2 5\n" + "3 5 14", string("") + "76");
}
