#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc233/D";
}

TEST(abc233_problemD, case1) {
	check(string("") + "6 5\n" + "8 -3 5 7 0 -4", string("") + "3");
}

TEST(abc233_problemD, case2) {
	check(string("") + "2 -1000000000000000\n" + "1000000000 -1000000000", string("") + "0");
}
