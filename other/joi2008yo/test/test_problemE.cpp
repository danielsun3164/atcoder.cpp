#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problemE";
}

TEST(joi2008yo_problemE, case1) {
	check(string("") + "2 5\n" + "0 1 0 1 0\n" + "1 0 0 0 1", string("") + "9");
}

TEST(joi2008yo_problemE, case2) {
	check(string("") + "3 6\n" + "1 0 0 0 1 0\n" + "1 1 1 0 1 0\n" + "1 0 1 1 0 1", string("") + "15");
}
