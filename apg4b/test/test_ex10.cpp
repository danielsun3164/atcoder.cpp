#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./ex10";

TEST(ex10, case1) {
	check(COMMAND, string("") + "5 9", string("") + "A:]]]]]\n" + "B:]]]]]]]]]");
}

TEST(ex10, case2) {
	check(COMMAND, string("") + "0 20", string("") + "A:\n" + "B:]]]]]]]]]]]]]]]]]]]]");
}
