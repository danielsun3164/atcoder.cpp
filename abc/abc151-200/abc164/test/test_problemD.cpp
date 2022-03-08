#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "1817181712114", string("") + "3");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "14282668646", string("") + "2");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "2119", string("") + "0");
}
