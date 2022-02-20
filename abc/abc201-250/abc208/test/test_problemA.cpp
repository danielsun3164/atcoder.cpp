#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "2 11", string("") + "Yes");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "2 13", string("") + "No");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "100 600", string("") + "Yes");
}
