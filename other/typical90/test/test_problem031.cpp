#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problem031";
	EXTERNAL = "typical90/031";
}

TEST(typical90_problem031, case1) {
	check(string("") + "1\n" + "0\n" + "2", string("") + "First");
}

TEST(typical90_problem031, case2) {
	check(string("") + "2\n" + "10 10\n" + "10 10", string("") + "Second");
}

TEST(typical90_problem031, case3) {
	check(string("") + "1\n" + "1\n" + "1", string("") + "Second");
}

TEST(typical90_problem031, case4) {
	check(string("") + "6\n" + "3 1 4 1 5 9\n" + "2 7 1 8 2 8", string("") + "Second");
}

TEST(typical90_problem031, case5) {
	check(string("") + "6\n" + "1 2 3 4 5 6\n" + "1 2 3 4 5 6", string("") + "First");
}
