#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
}

TEST(abc206_problemB, case1) {
	check(string("") + "12", string("") + "5");
}

TEST(abc206_problemB, case2) {
	check(string("") + "100128", string("") + "447");
}
