#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemH";
}

TEST(abc212_problemH, case1) {
	check(string("") + "2 2\n" + "1 2", string("") + "4");
}

TEST(abc212_problemH, case2) {
	check(string("") + "100 3\n" + "3 5 7", string("") + "112184936");
}
