#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemE";

TEST(problemE, case1) {
	check(COMMAND, string("") + "1\n" + "6 9 0 0", string("") + "5");
}

TEST(problemE, case2) {
	check(COMMAND, string("") + "4\n" + "3 2 0 4\n" + "1 3 0 0\n" + "4 4 2 1\n" + "2 2 0 0", string("") + "40");
}
