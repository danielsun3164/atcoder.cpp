#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemH";
	EXTERNAL = "abc213/H";
}

TEST(abc213_problemH, case1) {
	check(string("") + "3 2 2\n" + "1 2\n" + "1 0\n" + "1 3\n" + "2 0", string("") + "5");
}

TEST(abc213_problemH, case2) {
	check(string("") + "3 3 4\n" + "1 2\n" + "3 0 0 0\n" + "1 3\n" + "0 1 0 0\n" + "2 3\n" + "2 0 0 0",
			string("") + "130");
}

TEST(abc213_problemH, case3) {
	check(string("") + "2 1 5\n" + "1 2\n" + "31415 92653 58979 32384 62643", string("") + "844557977");
}
