#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc008_problemA, case1) {
	check(string("") + "4 7", string("") + "4");
}

TEST(abc008_problemA, case2) {
	check(string("") + "1 1", string("") + "1");
}
