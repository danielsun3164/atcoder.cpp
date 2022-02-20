#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "12", string("") + "4");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "1", string("") + "2");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "963761198400", string("") + "1920");
}
