#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ABC051/D";
}

TEST(abc051_problemD, case1) {
	check(string("") + "3 3\n" + "1 2 1\n" + "1 3 1\n" + "2 3 3", string("") + "1");
}

TEST(abc051_problemD, case2) {
	check(string("") + "3 2\n" + "1 2 1\n" + "2 3 1", string("") + "0");
}
