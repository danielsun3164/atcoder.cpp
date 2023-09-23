#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc017_problemA, case1) {
	check(string("") + "50 7\n" + "40 8\n" + "30 9", string("") + "94");
}

TEST(abc017_problemA, case2) {
	check(string("") + "990 10\n" + "990 10\n" + "990 10", string("") + "2970");
}
