#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(zone2021_problemA, case1) {
	check(string("") + "abcdZONefghi", string("") + "1");
}

TEST(zone2021_problemA, case2) {
	check(string("") + "ZONeZONeZONe", string("") + "3");
}

TEST(zone2021_problemA, case3) {
	check(string("") + "helloAtZoner", string("") + "0");
}
