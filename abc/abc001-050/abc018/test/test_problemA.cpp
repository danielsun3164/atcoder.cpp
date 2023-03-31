#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc018_problemA, case1) {
	check(string("") + "12\n" + "18\n" + "11", string("") + "2\n" + "1\n" + "3");
}

TEST(abc018_problemA, case2) {
	check(string("") + "10\n" + "20\n" + "30", string("") + "3\n" + "2\n" + "1");
}
