#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
	EXTERNAL = "abc200/A";
}

TEST(abc200_problemA, case1) {
	check(string("") + "2021", string("") + "21");
}

TEST(abc200_problemA, case2) {
	check(string("") + "200", string("") + "2");
}
