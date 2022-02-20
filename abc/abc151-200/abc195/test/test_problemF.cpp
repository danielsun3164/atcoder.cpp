#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "2 4", string("") + "6");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "1 1", string("") + "2");
}

TEST(problemF, case3) {
	check(PATH + COMMAND, string("") + "123456789000 123456789050", string("") + "2125824");
}
