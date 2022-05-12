#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc010_problemA, case1) {
	check(PATH + COMMAND, string("") + "chokudai", string("") + "chokudaipp");
}

TEST(abc010_problemA, case2) {
	check(PATH + COMMAND, string("") + "sanagi", string("") + "sanagipp");
}
