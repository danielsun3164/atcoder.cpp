#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc156_problemD, case1) {
	check(string("") + "4 1 3", string("") + "7");
}

TEST(abc156_problemD, case2) {
	check(string("") + "1000000000 141421 173205", string("") + "34076506");
}
