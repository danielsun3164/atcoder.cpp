#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC074/D";
}

TEST(abc062_problemD, case1) {
	check(string("") + "2\n" + "3 1 4 1 5 9", string("") + "1");
}

TEST(abc062_problemD, case2) {
	check(string("") + "1\n" + "1 2 3", string("") + "-1");
}

TEST(abc062_problemD, case3) {
	check(string("") + "3\n" + "8 2 2 7 4 6 5 3 8", string("") + "5");
}
