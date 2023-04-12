#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(joi2007ho_problemA, case1) {
	check(string("") + "5 3\n" + "2\n" + "5\n" + "-4\n" + "10\n" + "3", string("") + "11");
}
