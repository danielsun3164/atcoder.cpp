#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc247/F";
}

TEST(abc247_problemF, case1) {
	check(string("") + "3\n" + "1 2 3\n" + "2 1 3", string("") + "3");
}

TEST(abc247_problemF, case2) {
	check(string("") + "5\n" + "2 3 5 4 1\n" + "4 2 1 3 5", string("") + "12");
}

TEST(abc247_problemF, case3) {
	check(string("") + "8\n" + "1 2 3 4 5 6 7 8\n" + "1 2 3 4 5 6 7 8", string("") + "1");
}
