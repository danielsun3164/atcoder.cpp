#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc159B";

TEST(abc159B, case1) {
	check(PATH + COMMAND, string("") + "akasaka", string("") + "Yes");
}

TEST(abc159B, case2) {
	check(PATH + COMMAND, string("") + "level", string("") + "No");
}

TEST(abc159B, case3) {
	check(PATH + COMMAND, string("") + "atcoder", string("") + "No");
}
