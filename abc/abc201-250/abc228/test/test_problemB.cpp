#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc228/B";
}

TEST(abc228_problemB, case1) {
	check(string("") + "4 2\n" + "3 1 1 2", string("") + "3");
}

TEST(abc228_problemB, case2) {
	check(string("") + "20 12\n" + "7 11 10 1 7 20 14 2 17 3 2 5 19 20 8 14 18 2 10 10",
		  string("") + "7");
}
