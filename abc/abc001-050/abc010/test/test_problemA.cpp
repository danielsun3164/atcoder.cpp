#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "chokudai", string("") + "chokudaipp");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "sanagi", string("") + "sanagipp");
}