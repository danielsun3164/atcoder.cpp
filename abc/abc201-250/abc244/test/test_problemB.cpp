#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc244/B";
}

TEST(abc244_problemB, case1) {
	check(string("") + "4\n" + "SSRS", string("") + "2 -1");
}

TEST(abc244_problemB, case2) {
	check(string("") + "20\n" + "SRSRSSRSSSRSRRRRRSRR", string("") + "0 1");
}
