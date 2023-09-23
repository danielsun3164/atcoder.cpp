#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc037_problemB, case1) {
	check(string("") + "5 2\n" + "1 3 10\n" + "2 4 20", string("") + "10\n" + "20\n" + "20\n" + "20\n" + "0");
}

TEST(abc037_problemB, case2) {
	check(string("") + "10 4\n" + "2 7 22\n" + "3 5 4\n" + "6 10 1\n" + "4 4 12",
			string("") + "0\n" + "22\n" + "4\n" + "12\n" + "4\n" + "1\n" + "1\n" + "1\n" + "1\n" + "1");
}
