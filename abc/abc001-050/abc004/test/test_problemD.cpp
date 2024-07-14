#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc004_problemD, case1) {
	check(string("") + "2 3 4", string("") + "7");
}

TEST(abc004_problemD, case2) {
	check(string("") + "17 2 34", string("") + "362");
}

TEST(abc004_problemD, case3) {
	check(string("") + "267 294 165", string("") + "88577");
}
