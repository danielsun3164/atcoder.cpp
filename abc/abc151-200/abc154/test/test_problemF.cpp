#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "1 1 2 2", string("") + "14");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "314 159 2653 589", string("") + "602215194");
}
