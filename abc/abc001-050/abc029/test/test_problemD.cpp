#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc029_problemD, case1) {
	check(string("") + "12", string("") + "5");
}

TEST(abc029_problemD, case2) {
	check(string("") + "345", string("") + "175");
}

TEST(abc029_problemD, case3) {
	check(string("") + "999999999", string("") + "900000000");
}
