#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "ABC185/E";
}

TEST(abc185_problemE, case1) {
	check(string("") + "4 3\n" + "1 2 1 3\n" + "1 3 1", string("") + "2");
}

TEST(abc185_problemE, case2) {
	check(string("") + "4 6\n" + "1 3 2 4\n" + "1 5 2 6 4 3", string("") + "3");
}

TEST(abc185_problemE, case3) {
	check(string("") + "5 5\n" + "1 1 1 1 1\n" + "2 2 2 2 2", string("") + "5");
}
