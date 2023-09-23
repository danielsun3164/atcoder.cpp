#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "abc210/A";
}

TEST(abc210_problemA, case1) {
	check(string("") + "5 3 20 15", string("") + "90");
}

TEST(abc210_problemA, case2) {
	check(string("") + "10 10 100 1", string("") + "1000");
}
