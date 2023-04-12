#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
	EXTERNAL = "abc208/F";
}

TEST(abc208_problemF, case1) {
	check(string("") + "3 4 2", string("") + "35");
}

TEST(abc208_problemF, case2) {
	check(string("") + "0 1 2", string("") + "0");
}

TEST(abc208_problemF, case3) {
	check(string("") + "1000000000000000000 30 123456", string("") + "297085514");
}
