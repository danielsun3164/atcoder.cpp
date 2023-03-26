#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(abc215_problemA, case1) {
	check(PATH + COMMAND, string("") + "Hello,World!", string("") + "AC");
}

TEST(abc215_problemA, case2) {
	check(PATH + COMMAND, string("") + "Hello,world!", string("") + "WA");
}

TEST(abc215_problemA, case3) {
	check(PATH + COMMAND, string("") + "Hello!World!", string("") + "WA");
}
