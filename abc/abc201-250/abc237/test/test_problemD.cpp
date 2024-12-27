#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc237/D";
}

TEST(abc237_problemD, case1) {
	check(string("") + "5\n" + "LRRLR", string("") + "1 2 4 5 3 0");
}

TEST(abc237_problemD, case2) {
	check(string("") + "7\n" + "LLLLLLL", string("") + "7 6 5 4 3 2 1 0");
}
