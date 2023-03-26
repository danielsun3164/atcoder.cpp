#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc152_problemA, case1) {
	check(PATH + COMMAND, string("") + "3 3", string("") + "Yes");
}

TEST(abc152_problemA, case2) {
	check(PATH + COMMAND, string("") + "3 2", string("") + "No");
}

TEST(abc152_problemA, case3) {
	check(PATH + COMMAND, string("") + "1 1", string("") + "Yes");
}
