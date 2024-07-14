#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc215/H";
}

TEST(abc215_problemH, case1) {
	check(string("") + "3 2\n" + "2 2 5\n" + "3 4\n" + "1 0\n" + "1 1\n" + "0 1",
		  string("") + "2 6");
}

TEST(abc215_problemH, case2) {
	check(string("") + "1 1\n" + "3\n" + "4\n" + "1", string("") + "0 1");
}

TEST(abc215_problemH, case3) {
	check(string("") + "1 3\n" + "100\n" + "30 30 30\n" + "1 1 1", string("") + "11 892328666");
}
