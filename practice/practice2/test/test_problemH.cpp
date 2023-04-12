#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemH";
}

TEST(practice2_problemH, case1) {
	check(string("") + "3 2\n" + "1 4\n" + "2 5\n" + "0 6", string("") + "Yes\n" + "4\n" + "2\n" + "0");
}

TEST(practice2_problemH, case2) {
	check(string("") + "3 3\n" + "1 4\n" + "2 5\n" + "0 6", string("") + "No");
}
