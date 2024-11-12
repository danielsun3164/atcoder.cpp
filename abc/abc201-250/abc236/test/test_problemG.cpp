#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc236/G";
}

TEST(abc236_problemG, case1) {
	check(string("") + "4 5 3\n" + "2 3\n" + "3 4\n" + "1 2\n" + "3 2\n" + "2 2",
		  string("") + "-1 4 5 3");
}

TEST(abc236_problemG, case2) {
	check(string("") + "2 1 1000000000\n" + "1 2", string("") + "-1 -1");
}
