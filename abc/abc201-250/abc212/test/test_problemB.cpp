#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc212_problemB, case1) {
	check(string("") + "7777", string("") + "Weak");
}

TEST(abc212_problemB, case2) {
	check(string("") + "0112", string("") + "Strong");
}

TEST(abc212_problemB, case3) {
	check(string("") + "9012", string("") + "Weak");
}
