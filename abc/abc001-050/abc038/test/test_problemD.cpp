#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc038_problemD, case1) {
	check(string("") + "3\n" + "3 3\n" + "1 1\n" + "2 2", string("") + "3");
}

TEST(abc038_problemD, case2) {
	check(string("") + "2\n" + "4 5\n" + "4 3", string("") + "1");
}

TEST(abc038_problemD, case3) {
	check(string("") + "4\n" + "2 5\n" + "3 3\n" + "4 5\n" + "6 6", string("") + "3");
}

TEST(abc038_problemD, case4) {
	check(string("") + "5\n" + "8 8\n" + "5 3\n" + "2 2\n" + "4 2\n" + "2 1", string("") + "4");
}
