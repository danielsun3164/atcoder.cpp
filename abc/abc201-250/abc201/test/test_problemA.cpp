#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(abc201_problemA, case1) {
	check(string("") + "5 1 3", string("") + "Yes");
}

TEST(abc201_problemA, case2) {
	check(string("") + "1 4 3", string("") + "No");
}

TEST(abc201_problemA, case3) {
	check(string("") + "5 5 5", string("") + "Yes");
}
