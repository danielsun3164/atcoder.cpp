#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC059_ABC043/B";
}

TEST(abc043_problemB, case1) {
	check(string("") + "01B0", string("") + "00");
}

TEST(abc043_problemB, case2) {
	check(string("") + "0BB1", string("") + "1");
}
