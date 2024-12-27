#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc214/D";
}

TEST(abc214_problemD, case1) {
	check(string("") + "3\n" + "1 2 10\n" + "2 3 20", string("") + "50");
}

TEST(abc214_problemD, case2) {
	check(string("") + "5\n" + "1 2 1\n" + "2 3 2\n" + "4 2 5\n" + "3 5 14", string("") + "76");
}
