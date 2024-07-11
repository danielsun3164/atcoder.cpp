#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc226/F";
}

TEST(abc226_problemF, case1) {
	check(string("") + "2 2", string("") + "5");
}

TEST(abc226_problemF, case2) {
	check(string("") + "3 3", string("") + "79");
}

TEST(abc226_problemF, case3) {
	check(string("") + "50 10000", string("") + "77436607");
}
