#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc235/B";
}

TEST(abc235_problemB, case1) {
	check(string("") + "5\n" + "1 5 10 4 2", string("") + "10");
}

TEST(abc235_problemB, case2) {
	check(string("") + "3\n" + "100 1000 100000", string("") + "100000");
}

TEST(abc235_problemB, case3) {
	check(string("") + "4\n" + "27 1828 1828 9242", string("") + "1828");
}
