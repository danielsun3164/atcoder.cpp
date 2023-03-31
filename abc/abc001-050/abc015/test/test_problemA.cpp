#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc015_problemA, case1) {
	check(string("") + "isuruu\n" + "isleapyear", string("") + "isleapyear");
}

TEST(abc015_problemA, case2) {
	check(string("") + "ttttiiiimmmmeeee\n" + "time", string("") + "ttttiiiimmmmeeee");
}
