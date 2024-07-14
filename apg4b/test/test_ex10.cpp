#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "ex10";
}

TEST(apg4b_ex10, case1) {
	check(string("") + "5 9", string("") + "A:]]]]]\n" + "B:]]]]]]]]]");
}

TEST(apg4b_ex10, case2) {
	check(string("") + "0 20", string("") + "A:\n" + "B:]]]]]]]]]]]]]]]]]]]]");
}
