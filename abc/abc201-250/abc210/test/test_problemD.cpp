#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "abc210/D";
}

TEST(abc210_problemD, case1) {
	check(string("") + "3 4 2\n" + "1 7 7 9\n" + "9 6 3 7\n" + "7 8 6 4", string("") + "10");
}

TEST(abc210_problemD, case2) {
	check(string("") + "3 3 1000000000\n" + "1000000 1000000 1\n" + "1000000 1000000 1000000\n" + "1 1000000 1000000",
			string("") + "1001000001");
}
