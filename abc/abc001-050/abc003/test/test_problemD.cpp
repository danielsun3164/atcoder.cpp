#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "3 2\n" + "2 2\n" + "2 2", string("") + "12");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "4 5\n" + "3 1\n" + "3 0", string("") + "10");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "23 18\n" + "15 13\n" + "100 95", string("") + "364527243");
}

TEST(problemD, case4) {
	check(PATH + COMMAND, string("") + "30 30\n" + "24 22\n" + "145 132", string("") + "976668549");
}