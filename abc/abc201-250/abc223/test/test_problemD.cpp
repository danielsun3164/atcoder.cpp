#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "abc223/D";
}

TEST(abc223_problemD, case1) {
	check(string("") + "4 3\n" + "2 1\n" + "3 4\n" + "2 4", string("") + "2 1 3 4");
}

TEST(abc223_problemD, case2) {
	check(string("") + "2 3\n" + "1 2\n" + "1 2\n" + "2 1", string("") + "-1");
}
