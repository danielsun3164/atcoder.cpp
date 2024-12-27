#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC051/B";
}

TEST(abc051_problemB, case1) {
	check(string("") + "2 2", string("") + "6");
}

TEST(abc051_problemB, case2) {
	check(string("") + "5 15", string("") + "1");
}
