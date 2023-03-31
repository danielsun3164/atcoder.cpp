#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc009_problemA, case1) {
	check(string("") + "2", string("") + "1");
}

TEST(abc009_problemA, case2) {
	check(string("") + "5", string("") + "3");
}

TEST(abc009_problemA, case3) {
	check(string("") + "1", string("") + "1");
}
