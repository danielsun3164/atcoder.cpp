#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemF";

TEST(abc210_problemF, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "2 5\n" + "10 9\n" + "4 8", string("") + "Yes");
}

TEST(abc210_problemF, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "10 100\n" + "1000 10000", string("") + "No");
}
