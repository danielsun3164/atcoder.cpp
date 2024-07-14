#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ABC163/D";
}

TEST(abc163_problemD, case1) {
	check(string("") + "3 2", string("") + "10");
}

TEST(abc163_problemD, case2) {
	check(string("") + "200000 200001", string("") + "1");
}

TEST(abc163_problemD, case3) {
	check(string("") + "141421 35623", string("") + "220280457");
}
