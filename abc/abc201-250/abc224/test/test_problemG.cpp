#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemG";
	EXTERNAL = "abc224/G";
	TOLERANCE = 1E-5;
}

TEST(abc224_problemG, case1) {
	check_about(string("") + "5 2 4 10 4", 15.0);
}

TEST(abc224_problemG, case2) {
	check_about(string("") + "10 6 6 1 2", 0.0);
}

TEST(abc224_problemG, case3) {
	check_about(string("") + "1000000000 1000000000 1 1000000000 1000000000", 1000000000000000000.0);
}
