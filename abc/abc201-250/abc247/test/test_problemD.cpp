#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc247/D";
}

TEST(abc247_problemD, case1) {
	check(string("") + "4\n" + "1 2 3\n" + "2 2\n" + "1 3 4\n" + "2 3", string("") + "4\n" + "8");
}

TEST(abc247_problemD, case2) {
	check(string("") + "2\n" + "1 1000000000 1000000000\n" + "2 1000000000",
		  string("") + "1000000000000000000");
}

TEST(abc247_problemD, case3) {
	check_empty(string("") + "5\n" + "1 1 1\n" + "1 1 1\n" + "1 1 1\n" + "1 1 1\n" + "1 1 1");
}
