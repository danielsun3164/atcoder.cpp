#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "ABC194/E";
}

TEST(abc194_problemE, case1) {
	check(string("") + "3 2\n" + "0 0 1", string("") + "1");
}

TEST(abc194_problemE, case2) {
	check(string("") + "3 2\n" + "1 1 1", string("") + "0");
}

TEST(abc194_problemE, case3) {
	check(string("") + "3 2\n" + "0 1 0", string("") + "2");
}

TEST(abc194_problemE, case4) {
	check(string("") + "7 3\n" + "0 0 1 2 0 1 0", string("") + "2");
}
