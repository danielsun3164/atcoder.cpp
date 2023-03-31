#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc161_problemD, case1) {
	check(string("") + "15", string("") + "23");
}

TEST(abc161_problemD, case2) {
	check(string("") + "1", string("") + "1");
}

TEST(abc161_problemD, case3) {
	check(string("") + "13", string("") + "21");
}

TEST(abc161_problemD, case4) {
	check(string("") + "100000", string("") + "3234566667");
}
