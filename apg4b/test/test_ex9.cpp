#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "ex9";
}

TEST(apg4b_ex9, case1) {
	check(string("") + "1 2 3", string("") + "2\n" + "10\n" + "100\n" + "99");
}

TEST(apg4b_ex9, case2) {
	check(string("") + "3 2 5", string("") + "4\n" + "28\n" + "784\n" + "783");
}
