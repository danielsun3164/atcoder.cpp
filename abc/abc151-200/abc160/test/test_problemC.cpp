#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "ABC160/C";
}

TEST(abc160_problemC, case1) {
	check(string("") + "20 3\n" + "5 10 15", string("") + "10");
}

TEST(abc160_problemC, case2) {
	check(string("") + "20 3\n" + "0 5 15", string("") + "10");
}
