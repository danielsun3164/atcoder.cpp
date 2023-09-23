#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "abc206/E";
}

TEST(abc206_problemE, case1) {
	check(string("") + "3 7", string("") + "2");
}

TEST(abc206_problemE, case2) {
	check(string("") + "4 10", string("") + "12");
}

TEST(abc206_problemE, case3) {
	check(string("") + "1 1000000", string("") + "392047955148");
}
