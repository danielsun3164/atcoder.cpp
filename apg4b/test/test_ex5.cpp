#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "ex5";
}

TEST(apg4b_ex5, case1) {
	check(string("") + "1 2", string("") + "3");
}

TEST(apg4b_ex5, case2) {
	check(string("") + "100 99", string("") + "199");
}
