#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "31 87", string("") + "2784");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "101 65", string("") + "6666");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "3 3", string("") + "12");
}
