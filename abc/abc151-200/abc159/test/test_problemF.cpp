#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(abc159_problemF, case1) {
	check(PATH + COMMAND, string("") + "3 4\n" + "2 2 4", string("") + "5");
}

TEST(abc159_problemF, case2) {
	check(PATH + COMMAND, string("") + "5 8\n" + "9 9 9 9 9", string("") + "0");
}

TEST(abc159_problemF, case3) {
	check(PATH + COMMAND, string("") + "10 10\n" + "3 1 4 1 5 9 2 6 5 3", string("") + "152");
}
