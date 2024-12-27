#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc205/F";
}

TEST(abc205_problemF, case1) {
	check(string("") + "2 3 3\n" + "1 1 2 2\n" + "1 2 2 3\n" + "1 1 1 3", string("") + "2");
}

TEST(abc205_problemF, case2) {
	check(string("") + "5 5 3\n" + "1 1 5 5\n" + "1 1 4 4\n" + "2 2 3 3", string("") + "3");
}
