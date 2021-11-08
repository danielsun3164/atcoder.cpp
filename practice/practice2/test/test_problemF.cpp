#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemF";

TEST(problemF, case1) {
	check(COMMAND, string("") + "4 5\n" + "1 2 3 4\n" + "5 6 7 8 9", string("") + "5 16 34 60 70 70 59 36");
}

TEST(problemF, case2) {
	check(COMMAND, string("") + "1 1\n" + "10000000\n" + "10000000", string("") + "871938225");
}
