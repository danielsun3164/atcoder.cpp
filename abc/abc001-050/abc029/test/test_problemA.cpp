#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc029_problemA, case1) {
	check(PATH + COMMAND, string("") + "dog", string("") + "dogs");
}

TEST(abc029_problemA, case2) {
	check(PATH + COMMAND, string("") + "chokudai", string("") + "chokudais");
}
