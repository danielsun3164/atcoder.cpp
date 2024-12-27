#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
}

TEST(abc017_problemD, case1) {
	check(string("") + "5 2\n" + "1\n" + "2\n" + "1\n" + "2\n" + "2", string("") + "5");
}

TEST(abc017_problemD, case2) {
	check(string("") + "6 6\n" + "1\n" + "2\n" + "3\n" + "4\n" + "5\n" + "6", string("") + "32");
}
