#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC070/C";
}

TEST(abc056_problemC, case1) {
	check(string("") + "6", string("") + "3");
}

TEST(abc056_problemC, case2) {
	check(string("") + "2", string("") + "2");
}

TEST(abc056_problemC, case3) {
	check(string("") + "11", string("") + "5");
}
