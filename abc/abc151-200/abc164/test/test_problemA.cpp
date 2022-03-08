#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "4 5", string("") + "unsafe");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "100 2", string("") + "safe");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "10 10", string("") + "unsafe");
}
