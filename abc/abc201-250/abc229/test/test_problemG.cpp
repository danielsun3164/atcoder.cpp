#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc229/G";
}

TEST(abc229_problemG, case1) {
	check(string("") + "YY...Y.Y.Y.\n" + "2", string("") + "3");
}

TEST(abc229_problemG, case2) {
	check(string("") + "YYYY....YYY\n" + "3", string("") + "4");
}
