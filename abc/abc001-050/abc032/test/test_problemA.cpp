#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "3\n" + "8", string("") + "12");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "2\n" + "2", string("") + "2");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "12\n" + "8\n" + "25", string("") + "48");
}
