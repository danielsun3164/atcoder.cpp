#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc162_problemA, case1) {
	check(PATH + COMMAND, string("") + "117", string("") + "Yes");
}

TEST(abc162_problemA, case2) {
	check(PATH + COMMAND, string("") + "123", string("") + "No");
}

TEST(abc162_problemA, case3) {
	check(PATH + COMMAND, string("") + "777", string("") + "Yes");
}
