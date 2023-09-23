#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc006_problemD, case1) {
	check(string("") + "6\n" + "1\n" + "3\n" + "5\n" + "2\n" + "4\n" + "6", string("") + "2");
}

TEST(abc006_problemD, case2) {
	check(string("") + "5\n" + "5\n" + "4\n" + "3\n" + "2\n" + "1", string("") + "4");
}

TEST(abc006_problemD, case3) {
	check(string("") + "7\n" + "1\n" + "2\n" + "3\n" + "4\n" + "5\n" + "6\n" + "7", string("") + "0");
}
