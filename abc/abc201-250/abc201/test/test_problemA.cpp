#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(abc201_problemA, case1) {
	check(PATH + COMMAND, string("") + "5 1 3", string("") + "Yes");
}

TEST(abc201_problemA, case2) {
	check(PATH + COMMAND, string("") + "1 4 3", string("") + "No");
}

TEST(abc201_problemA, case3) {
	check(PATH + COMMAND, string("") + "5 5 5", string("") + "Yes");
}
