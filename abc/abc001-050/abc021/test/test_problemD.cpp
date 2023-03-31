#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc021_problemD, case1) {
	check(string("") + "10\n" + "2", string("") + "55");
}

TEST(abc021_problemD, case2) {
	check(string("") + "10\n" + "3", string("") + "220");
}

TEST(abc021_problemD, case3) {
	check(string("") + "10\n" + "4", string("") + "715");
}

TEST(abc021_problemD, case4) {
	check(string("") + "400\n" + "296", string("") + "546898535");
}

TEST(abc021_problemD, case5) {
	check(string("") + "100000\n" + "100000", string("") + "939733670");
}
