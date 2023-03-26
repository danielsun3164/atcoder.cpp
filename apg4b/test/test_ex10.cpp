#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "ex10";

TEST(apg4b_ex10, case1) {
	check(PATH + COMMAND, string("") + "5 9", string("") + "A:]]]]]\n" + "B:]]]]]]]]]");
}

TEST(apg4b_ex10, case2) {
	check(PATH + COMMAND, string("") + "0 20", string("") + "A:\n" + "B:]]]]]]]]]]]]]]]]]]]]");
}
