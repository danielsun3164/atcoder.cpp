#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc036_problemC, case1) {
	check(string("") + "5\n" + "3\n" + "3\n" + "1\n" + "6\n" + "1",
		  string("") + "1\n" + "1\n" + "0\n" + "2\n" + "0");
}
