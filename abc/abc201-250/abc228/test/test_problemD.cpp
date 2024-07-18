#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc228/D";
}

TEST(abc228_problemD, case1) {
	check(string("") + "4\n" + "1 1048577\n" + "1 1\n" + "2 2097153\n" + "2 3",
		  string("") + "1048577\n" + "-1");
}
