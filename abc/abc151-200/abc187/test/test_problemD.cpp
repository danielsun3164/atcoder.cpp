#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ABC187/D";
}

TEST(abc187_problemD, case1) {
	check(string("") + "4\n" + "2 1\n" + "2 2\n" + "5 1\n" + "1 3", string("") + "1");
}

TEST(abc187_problemD, case2) {
	check(string("") + "5\n" + "2 1\n" + "2 1\n" + "2 1\n" + "2 1\n" + "2 1", string("") + "3");
}

TEST(abc187_problemD, case3) {
	check(string("") + "1\n" + "273 691", string("") + "1");
}
