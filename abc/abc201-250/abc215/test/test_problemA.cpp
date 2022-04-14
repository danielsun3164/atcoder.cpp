#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "Hello,World!", string("") + "AC");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "Hello,world!", string("") + "WA");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "Hello!World!", string("") + "WA");
}
