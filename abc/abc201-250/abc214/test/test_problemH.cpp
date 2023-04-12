#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemH";
	EXTERNAL = "abc214/H";
}

TEST(abc214_problemH, case1) {
	check(string("") + "5 5 2\n" + "1 2\n" + "2 3\n" + "3 2\n" + "1 4\n" + "1 5\n" + "1 4 5 2 8", string("") + "18");
}

TEST(abc214_problemH, case2) {
	check(string("") + "3 1 10\n" + "2 3\n" + "1 100 100", string("") + "1");
}
