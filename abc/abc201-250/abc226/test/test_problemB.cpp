#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc226/B";
}

TEST(abc226_problemB, case1) {
	check(string("") + "4\n" + "2 1 2\n" + "2 1 1\n" + "2 2 1\n" + "2 1 2", string("") + "3");
}

TEST(abc226_problemB, case2) {
	check(string("") + "5\n" + "1 1\n" + "1 1\n" + "1 2\n" + "2 1 1\n" + "3 1 1 1",
		  string("") + "4");
}

TEST(abc226_problemB, case3) {
	check(string("") + "1\n" + "1 1", string("") + "1");
}
