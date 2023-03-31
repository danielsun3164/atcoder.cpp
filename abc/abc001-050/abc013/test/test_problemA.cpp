#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc013_problemA, case1) {
	check(string("") + "A", string("") + "1");
}

TEST(abc013_problemA, case2) {
	check(string("") + "B", string("") + "2");
}

TEST(abc013_problemA, case3) {
	check(string("") + "C", string("") + "3");
}

TEST(abc013_problemA, case4) {
	check(string("") + "D", string("") + "4");
}
