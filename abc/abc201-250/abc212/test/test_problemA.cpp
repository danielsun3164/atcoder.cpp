#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc212_problemA, case1) {
	check(string("") + "50 50", string("") + "Alloy");
}

TEST(abc212_problemA, case2) {
	check(string("") + "100 0", string("") + "Gold");
}

TEST(abc212_problemA, case3) {
	check(string("") + "0 100", string("") + "Silver");
}

TEST(abc212_problemA, case4) {
	check(string("") + "100 2", string("") + "Alloy");
}
