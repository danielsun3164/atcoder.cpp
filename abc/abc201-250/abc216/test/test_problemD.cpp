#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc216/D";
}

TEST(abc216_problemD, case1) {
	check(string("") + "2 2\n" + "2\n" + "1 2\n" + "2\n" + "1 2", string("") + "Yes");
}

TEST(abc216_problemD, case2) {
	check(string("") + "2 2\n" + "2\n" + "1 2\n" + "2\n" + "2 1", string("") + "No");
}
