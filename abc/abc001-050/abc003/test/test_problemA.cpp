#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "6", string("") + "35000");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "91", string("") + "460000");
}
