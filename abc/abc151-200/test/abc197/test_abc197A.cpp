#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc197A";

TEST(abc197A, case1) {
	check(PATH + COMMAND, string("") + "abc", string("") + "bca");
}

TEST(abc197A, case2) {
	check(PATH + COMMAND, string("") + "aab", string("") + "aba");
}
