#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc193_problemC, case1) {
	check(string("") + "8", string("") + "6");
}

TEST(abc193_problemC, case2) {
	check(string("") + "100000", string("") + "99634");
}
