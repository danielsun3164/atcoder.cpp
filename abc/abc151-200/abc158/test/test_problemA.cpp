#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "ABA", string("") + "Yes");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "BBA", string("") + "Yes");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "BBB", string("") + "No");
}
