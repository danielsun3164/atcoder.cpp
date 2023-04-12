#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemH";
	EXTERNAL = "abc217/H";
}

TEST(abc217_problemH, case1) {
	check(string("") + "3\n" + "1 0 3\n" + "3 1 0\n" + "4 0 6", string("") + "7");
}

TEST(abc217_problemH, case2) {
	check(string("") + "3\n" + "1 0 1\n" + "6 1 1\n" + "8 0 -1", string("") + "0");
}

TEST(abc217_problemH, case3) {
	check(
			string("") + "5\n" + "1 0 1000000000\n" + "2 1 -1000000000\n" + "3 0 1000000000\n" + "4 1 -1000000000\n"
					+ "5 0 1000000000", string("") + "4999999997");
}
