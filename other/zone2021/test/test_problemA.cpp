#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(zone2021_problemA, case1) {
	check(PATH + COMMAND, string("") + "abcdZONefghi", string("") + "1");
}

TEST(zone2021_problemA, case2) {
	check(PATH + COMMAND, string("") + "ZONeZONeZONe", string("") + "3");
}

TEST(zone2021_problemA, case3) {
	check(PATH + COMMAND, string("") + "helloAtZoner", string("") + "0");
}
