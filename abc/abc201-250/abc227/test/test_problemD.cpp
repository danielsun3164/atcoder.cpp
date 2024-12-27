#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc227/D";
}

TEST(abc227_problemD, case1) {
	check(string("") + "3 3\n" + "2 3 4", string("") + "2");
}

TEST(abc227_problemD, case2) {
	check(string("") + "4 2\n" + "1 1 3 4", string("") + "4");
}

TEST(abc227_problemD, case3) {
	check(string("") + "4 3\n" + "1 1 3 4", string("") + "2");
}
