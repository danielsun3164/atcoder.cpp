#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "ABC196/E";
}

TEST(abc196_problemE, case1) {
	check(string("") + "3\n" + "-10 2\n" + "10 1\n" + "10 3\n" + "5\n" + "-15 -10 -5 0 5",
		  string("") + "0\n" + "0\n" + "5\n" + "10\n" + "10");
}
