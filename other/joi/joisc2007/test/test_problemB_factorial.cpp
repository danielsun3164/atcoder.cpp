#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB_factorial";
	EXTERNAL = "joisc2007/Factorial";
}

TEST(joisc2007_problemB, case1) {
	check(string("") + "10", string("") + "5");
}

TEST(joisc2007_problemB, case2) {
	check(string("") + "12", string("") + "4");
}
