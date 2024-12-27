#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ABC185/D";
}

TEST(abc185_problemD, case1) {
	check(string("") + "5 2\n" + "1 3", string("") + "3");
}

TEST(abc185_problemD, case2) {
	check(string("") + "13 3\n" + "13 3 9", string("") + "6");
}

TEST(abc185_problemD, case3) {
	check(string("") + "5 5\n" + "5 2 1 4 3", string("") + "0");
}

TEST(abc185_problemD, case4) {
	check(string("") + "1 0\n" + "", string("") + "1");
}
