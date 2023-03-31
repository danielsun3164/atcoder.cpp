#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc205_problemD, case1) {
	check(string("") + "4 3\n" + "3 5 6 7\n" + "2\n" + "5\n" + "3", string("") + "2\n" + "9\n" + "4");
}

TEST(abc205_problemD, case2) {
	check(string("") + "5 2\n" + "1 2 3 4 5\n" + "1\n" + "10", string("") + "6\n" + "15");
}
