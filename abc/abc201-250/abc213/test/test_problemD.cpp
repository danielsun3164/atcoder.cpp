#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "abc213/D";
}

TEST(abc213_problemD, case1) {
	check(string("") + "4\n" + "1 2\n" + "4 2\n" + "3 1", string("") + "1 2 4 2 1 3 1");
}

TEST(abc213_problemD, case2) {
	check(string("") + "5\n" + "1 2\n" + "1 3\n" + "1 4\n" + "1 5", string("") + "1 2 1 3 1 4 1 5 1");
}
