#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc007_problemA, case1) {
	check(PATH + COMMAND, string("") + "4", string("") + "3");
}

TEST(abc007_problemA, case2) {
	check(PATH + COMMAND, string("") + "100", string("") + "99");
}

TEST(abc007_problemA, case3) {
	check(PATH + COMMAND, string("") + "1", string("") + "0");
}
