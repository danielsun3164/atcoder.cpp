#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc196_problemD, case1) {
	check(string("") + "2 2 1 2", string("") + "4");
}

TEST(abc196_problemD, case2) {
	check(string("") + "3 3 4 1", string("") + "18");
}

TEST(abc196_problemD, case3) {
	check(string("") + "4 4 8 0", string("") + "36");
}
