#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc196_problemA, case1) {
	check(PATH + COMMAND, string("") + "0 10\n" + "0 10", string("") + "10");
}

TEST(abc196_problemA, case2) {
	check(PATH + COMMAND, string("") + "-100 -100\n" + "100 100", string("") + "-200");
}

TEST(abc196_problemA, case3) {
	check(PATH + COMMAND, string("") + "-100 100\n" + "-100 100", string("") + "200");
}
