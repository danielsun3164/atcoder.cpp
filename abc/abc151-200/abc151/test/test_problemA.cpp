#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "ABC151/A";
}

TEST(abc151_problemA, case1) {
	check(string("") + "a", string("") + "b");
}

TEST(abc151_problemA, case2) {
	check(string("") + "y", string("") + "z");
}
