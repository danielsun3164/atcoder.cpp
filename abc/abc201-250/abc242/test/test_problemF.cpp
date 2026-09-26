#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc242/F";
}

TEST(abc242_problemF, case1) {
	check(string("") + "2 2 1 1", string("") + "4");
}

TEST(abc242_problemF, case2) {
	check(string("") + "1 2 1 1", string("") + "0");
}

TEST(abc242_problemF, case3) {
	check(string("") + "40 40 30 30", string("") + "467620384");
}
