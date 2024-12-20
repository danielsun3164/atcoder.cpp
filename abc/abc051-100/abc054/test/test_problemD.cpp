#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ABC054/D";
}

TEST(abc054_problemD, case1) {
	check(string("") + "3 1 1\n" + "1 2 1\n" + "2 1 2\n" + "3 3 10", string("") + "3");
}

TEST(abc054_problemD, case2) {
	check(string("") + "1 1 10\n" + "10 10 10", string("") + "-1");
}
