#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc165_problemD, case1) {
	check(string("") + "5 7 4", string("") + "2");
}

TEST(abc165_problemD, case2) {
	check(string("") + "11 10 9", string("") + "9");
}
