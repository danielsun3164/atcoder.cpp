#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc192_problemD, case1) {
	check(string("") + "22\n" + "10", string("") + "2");
}

TEST(abc192_problemD, case2) {
	check(string("") + "999\n" + "1500", string("") + "3");
}

TEST(abc192_problemD, case3) {
	check(string("") + "100000000000000000000000000000000000000000000000000000000000\n" + "1000000000000000000",
			string("") + "1");
}

TEST(abc192_problemD, case4) {
	check(string("") + "2\n" + "8", string("") + "1");
}

TEST(abc192_problemD, case5) {
	check(string("") + "2\n" + "1", string("") + "0");
}
