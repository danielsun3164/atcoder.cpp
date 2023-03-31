#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block {
	COMMAND = "problem076";
}

TEST(typical90_problem076, case1) {
	check(string("") + "10\n" + "1 1 1 1 1 1 1 1 1 1", string("") + "Yes");
}

TEST(typical90_problem076, case2) {
	check(string("") + "3\n" + "1 1 1", string("") + "No");
}

TEST(typical90_problem076, case3) {
	check(string("") + "3\n" + "1 18 1", string("") + "Yes");
}

TEST(typical90_problem076, case4) {
	check(string("") + "4\n" + "1 9 1 9", string("") + "No");
}
