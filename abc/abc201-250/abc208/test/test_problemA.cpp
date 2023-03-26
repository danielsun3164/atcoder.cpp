#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(abc208_problemA, case1) {
	check(PATH + COMMAND, string("") + "2 11", string("") + "Yes");
}

TEST(abc208_problemA, case2) {
	check(PATH + COMMAND, string("") + "2 13", string("") + "No");
}

TEST(abc208_problemA, case3) {
	check(PATH + COMMAND, string("") + "100 600", string("") + "Yes");
}
