#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC070/B";
}

TEST(abc056_problemB, case1) {
	check(string("") + "3 2 6", string("") + "1");
}

TEST(abc056_problemB, case2) {
	check(string("") + "3 1 3", string("") + "0");
}

TEST(abc056_problemB, case3) {
	check(string("") + "5 10 1", string("") + "4");
}
