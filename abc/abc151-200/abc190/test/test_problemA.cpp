#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "2 1 0", string("") + "Takahashi");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "2 2 0", string("") + "Aoki");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "2 2 1", string("") + "Takahashi");
}
