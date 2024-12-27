#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc229/D";
}

TEST(abc229_problemD, case1) {
	check(string("") + "XX...X.X.X.\n" + "2", string("") + "5");
}

TEST(abc229_problemD, case2) {
	check(string("") + "XXXX\n" + "200000", string("") + "4");
}
