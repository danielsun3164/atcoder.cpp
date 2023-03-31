#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problemB_factorial";
}

TEST(joisc2007_problemB, case1) {
	check(string("") + "10", string("") + "5");
}

TEST(joisc2007_problemB, case2) {
	check(string("") + "12", string("") + "4");
}
