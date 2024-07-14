#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc219/H";
}

TEST(abc219_problemH, case1) {
	check(string("") + "3\n" + "-2 10\n" + "3 10\n" + "12 10", string("") + "11");
}

TEST(abc219_problemH, case2) {
	check(string("") + "5\n" + "0 1000000000\n" + "0 1000000000\n" + "1 1000000000\n" +
			  "2 1000000000\n" + "3 1000000000",
		  string("") + "4999999994");
}
