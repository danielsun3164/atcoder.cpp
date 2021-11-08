#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemA";

TEST(problemA, case1) {
	check(COMMAND, string("") + "abcdZONefghi", string("") + "1");
}

TEST(problemA, case2) {
	check(COMMAND, string("") + "ZONeZONeZONe", string("") + "3");
}

TEST(problemA, case3) {
	check(COMMAND, string("") + "helloAtZoner", string("") + "0");
}
