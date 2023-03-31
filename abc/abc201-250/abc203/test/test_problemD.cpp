#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc203_problemD, case1) {
	check(string("") + "3 2\n" + "1 7 0\n" + "5 8 11\n" + "10 4 2", string("") + "4");
}

TEST(abc203_problemD, case2) {
	check(string("") + "3 3\n" + "1 2 3\n" + "4 5 6\n" + "7 8 9", string("") + "5");
}
