#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "joi2007ho/E";
}

TEST(joi2007ho_problemE, case1) {
	check(string("") + "1\n" + "6 9 0 0", string("") + "5");
}

TEST(joi2007ho_problemE, case2) {
	check(string("") + "4\n" + "3 2 0 4\n" + "1 3 0 0\n" + "4 4 2 1\n" + "2 2 0 0",
		  string("") + "40");
}
