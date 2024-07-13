#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc227/G";
}

TEST(abc227_problemG, case1) {
	check(string("") + "5 2", string("") + "4");
}

TEST(abc227_problemG, case2) {
	check(string("") + "103 3", string("") + "8");
}

TEST(abc227_problemG, case3) {
	check(string("") + "1000000000000 1000000", string("") + "110520107");
}
