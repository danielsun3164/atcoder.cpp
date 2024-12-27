#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc221/D";
}

TEST(abc221_problemD, case1) {
	check(string("") + "3\n" + "1 2\n" + "2 3\n" + "3 1", string("") + "2 2 0");
}

TEST(abc221_problemD, case2) {
	check(string("") + "2\n" + "1000000000 1000000000\n" + "1000000000 1000000000",
		  string("") + "0 1000000000");
}
