#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "ex4";
}

TEST(apg4b_ex4, case1) {
	check(string(""), string("") + "31536000\n" + "63072000\n" + "157680000\n" + "315360000");
}
