#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc219/D";
}

TEST(abc219_problemD, case1) {
	check(string("") + "3\n" + "5 6\n" + "2 1\n" + "3 4\n" + "2 3", string("") + "2");
}

TEST(abc219_problemD, case2) {
	check(string("") + "3\n" + "8 8\n" + "3 4\n" + "2 3\n" + "2 1", string("") + "-1");
}
