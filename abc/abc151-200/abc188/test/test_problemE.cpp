#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "ABC188/E";
}

TEST(abc188_problemE, case1) {
	check(string("") + "4 3\n" + "2 3 1 5\n" + "2 4\n" + "1 2\n" + "1 3", string("") + "3");
}

TEST(abc188_problemE, case2) {
	check(string("") + "5 5\n" + "13 8 3 15 18\n" + "2 4\n" + "1 2\n" + "4 5\n" + "2 3\n" + "1 3", string("") + "10");
}

TEST(abc188_problemE, case3) {
	check(string("") + "3 1\n" + "1 100 1\n" + "2 3", string("") + "-99");
}
