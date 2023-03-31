#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc191_problemD, case1) {
	check(string("") + "0.2 0.8 1.1", string("") + "3");
}

TEST(abc191_problemD, case2) {
	check(string("") + "100 100 1", string("") + "5");
}

TEST(abc191_problemD, case3) {
	check(string("") + "42782.4720 31949.0192 99999.99", string("") + "31415920098");
}
