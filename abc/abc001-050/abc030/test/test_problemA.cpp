#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "5 2 6 3", string("") + "AOKI");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "100 80 100 73", string("") + "TAKAHASHI");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "66 30 55 25", string("") + "DRAW");
}
