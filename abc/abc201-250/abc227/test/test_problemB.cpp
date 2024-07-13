#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc227/B";
}

TEST(abc227_problemB, case1) {
	check(string("") + "3\n" + "10 20 39", string("") + "1");
}

TEST(abc227_problemB, case2) {
	check(string("") + "5\n" + "666 777 888 777 666", string("") + "3");
}
