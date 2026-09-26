#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc242/C";
}

TEST(abc242_problemC, case1) {
	check(string("") + "4", string("") + "203");
}

TEST(abc242_problemC, case2) {
	check(string("") + "2", string("") + "25");
}

TEST(abc242_problemC, case3) {
	check(string("") + "1000000", string("") + "248860093");
}
