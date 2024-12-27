#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem034";
	EXTERNAL = "typical90/034";
}

TEST(typical90_problem034, case1) {
	check(string("") + "5 1\n" + "1 2 3 4 5", string("") + "1");
}

TEST(typical90_problem034, case2) {
	check(string("") + "5 4\n" + "1 1 2 4 2", string("") + "5");
}

TEST(typical90_problem034, case3) {
	check(string("") + "10 2\n" + "1 2 3 4 4 3 2 1 2 3", string("") + "4");
}
