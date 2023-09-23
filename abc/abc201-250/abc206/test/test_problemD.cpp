#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "abc206/D";
}

TEST(abc206_problemD, case1) {
	check(string("") + "8\n" + "1 5 3 2 5 2 3 1", string("") + "2");
}

TEST(abc206_problemD, case2) {
	check(string("") + "7\n" + "1 2 3 4 1 2 3", string("") + "1");
}

TEST(abc206_problemD, case3) {
	check(string("") + "1\n" + "200000", string("") + "0");
}
