#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "ex23";
}

TEST(apg4b_ex23, case1) {
	check(string("") + "5\n" + "1 4 4 2 3", string("") + "4 2");
}

TEST(apg4b_ex23, case2) {
	check(string("") + "6\n" + "3 2 3 1 3 2", string("") + "3 3");
}

TEST(apg4b_ex23, case3) {
	check(string("") + "1\n" + "1000000000", string("") + "1000000000 1");
}
