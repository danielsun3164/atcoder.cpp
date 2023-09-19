#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
	EXTERNAL = "abc219/F";
}

TEST(abc219_problemF, case1) {
	check(string("") + "RDRUL\n" + "2", string("") + "7");
}

TEST(abc219_problemF, case2) {
	check(string("") + "LR\n" + "1000000000000", string("") + "2");
}

TEST(abc219_problemF, case3) {
	check(string("") + "UUURRDDDRRRUUUURDLLUURRRDDDDDDLLLLLLU\n" + "31415926535", string("") + "219911485785");
}
