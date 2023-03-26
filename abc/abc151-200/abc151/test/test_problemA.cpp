#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc151_problemA, case1) {
	check(PATH + COMMAND, string("") + "a", string("") + "b");
}

TEST(abc151_problemA, case2) {
	check(PATH + COMMAND, string("") + "y", string("") + "z");
}
