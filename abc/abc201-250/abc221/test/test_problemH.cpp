#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemH";
	EXTERNAL = "abc221/H";
}

TEST(abc221_problemH, case1) {
	check(string("") + "4 2", string("") + "1\n" + "2\n" + "1\n" + "0");
}

TEST(abc221_problemH, case2) {
	check(string("") + "7 7", string("") + "1\n" + "3\n" + "4\n" + "3\n" + "2\n" + "1\n" + "1");
}
