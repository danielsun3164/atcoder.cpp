#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc010A";

TEST(abc010A, case1) {
	check(PATH + COMMAND, string("") + "chokudai", string("") + "chokudaipp");
}

TEST(abc010A, case2) {
	check(PATH + COMMAND, string("") + "sanagi", string("") + "sanagipp");
}
