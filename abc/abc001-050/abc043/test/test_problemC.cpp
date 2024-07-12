#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc043_problemC, case1) {
	check(string("") + "2\n" + "4 8", string("") + "8");
}

TEST(abc043_problemC, case2) {
	check(string("") + "3\n" + "1 1 3", string("") + "3");
}

TEST(abc043_problemC, case3) {
	check(string("") + "3\n" + "4 2 5", string("") + "5");
}

TEST(abc043_problemC, case4) {
	check(string("") + "4\n" + "-100 -100 -100 -100", string("") + "0");
}
