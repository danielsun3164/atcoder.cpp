#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problem075";
	EXTERNAL = "typical90/075";
}

TEST(typical90_problem075, case1) {
	check(string("") + "42", string("") + "2");
}

TEST(typical90_problem075, case2) {
	check(string("") + "48", string("") + "3");
}

TEST(typical90_problem075, case3) {
	check(string("") + "54", string("") + "2");
}

TEST(typical90_problem075, case4) {
	check(string("") + "53", string("") + "0");
}
