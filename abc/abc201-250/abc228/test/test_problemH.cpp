#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc228/H";
}

TEST(abc228_problemH, case1) {
	check(string("") + "3 5\n" + "3 2\n" + "2 4\n" + "4 3", string("") + "12");
}

TEST(abc228_problemH, case2) {
	check(string("") + "1 1\n" + "1 1", string("") + "1");
}

TEST(abc228_problemH, case3) {
	check(string("") + "7 7\n" + "3 2\n" + "1 7\n" + "4 1\n" + "1 8\n" + "5 2\n" + "9 8\n" + "2 1",
		  string("") + "29");
}
