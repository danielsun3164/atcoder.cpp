#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc233/C";
}

TEST(abc233_problemC, case1) {
	check(string("") + "2 40\n" + "3 1 8 4\n" + "2 10 5", string("") + "2");
}

TEST(abc233_problemC, case2) {
	check(string("") + "3 200\n" + "3 10 10 10\n" + "3 10 10 10\n" + "5 2 2 2 2 2",
		  string("") + "45");
}

TEST(abc233_problemC, case3) {
	check(string("") + "3 1000000000000000000\n" + "2 1000000000 1000000000\n" +
			  "2 1000000000 1000000000\n" + "2 1000000000 1000000000",
		  string("") + "0");
}
