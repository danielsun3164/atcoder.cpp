#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(abc197_problemA, case1) {
	check(PATH + COMMAND, string("") + "abc", string("") + "bca");
}

TEST(abc197_problemA, case2) {
	check(PATH + COMMAND, string("") + "aab", string("") + "aba");
}
