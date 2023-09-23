#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc022_problemB, case1) {
	check(string("") + "5\n" + "1\n" + "2\n" + "3\n" + "2\n" + "1", string("") + "2");
}

TEST(abc022_problemB, case2) {
	check(string("") + "11\n" + "3\n" + "1\n" + "4\n" + "1\n" + "5\n" + "9\n" + "2\n" + "6\n" + "5\n" + "3\n" + "5",
			string("") + "4");
}
