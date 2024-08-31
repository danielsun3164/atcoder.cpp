#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc235/D";
}

TEST(abc235_problemD, case1) {
	check(string("") + "3 72", string("") + "4");
}

TEST(abc235_problemD, case2) {
	check(string("") + "2 5", string("") + "-1");
}

TEST(abc235_problemD, case3) {
	check(string("") + "2 611", string("") + "12");
}

TEST(abc235_problemD, case4) {
	check(string("") + "2 767090", string("") + "111");
}
