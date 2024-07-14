#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc223/G";
}

TEST(abc223_problemG, case1) {
	check(string("") + "3\n" + "1 2\n" + "2 3", string("") + "2");
}

TEST(abc223_problemG, case2) {
	check(string("") + "2\n" + "1 2", string("") + "0");
}

TEST(abc223_problemG, case3) {
	check(string("") + "6\n" + "2 5\n" + "3 5\n" + "1 4\n" + "4 5\n" + "4 6", string("") + "4");
}
